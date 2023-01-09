using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1
{
    public class Program
    {
        public static void Main(string[] args)
        {
            Console.OutputEncoding = Encoding.UTF8;
            XuLy xuly = new XuLy();
            xuly.taoDSPhim();
            xuly.taoDSKhachHang();
            xuly.taoDSDienVien();
            xuly.taoDSDia();

            xuly.taoDSP_DV();
            xuly.taoDSD_P();
            xuly.taoDSTD();


            //Element Operators - FirstOrDefault - Condition
            Console.WriteLine("1. Tìm kiếm thông tin khách hàng thông qua mã khách hàng.");
            xuly.TT_ThueDia("KH0001");
            Console.WriteLine("\n");

            //Join Operators - Cross Join
            Console.WriteLine("2. Tìm kiếm thông tin diễn viên thông qua tên phim.");
            xuly.TT_Phim_DV("Bông hoa rừng Sác");
            Console.WriteLine("\n");

            //Quantifiers - Any
            //Restriction Operators - Where
            Console.WriteLine("3. Kiểm tra phim có nằm trong đĩa hay không.");
            xuly.KT_DP("D0002", "Phạm Công Cúc Hoa");
            Console.WriteLine("\n");

            //Quantifiers - All
            Console.WriteLine("4. Kiểm tra mã phim thông qua chữ cái.");
            xuly.KT_PMa("P");
            Console.WriteLine("\n");

            //Ordering Operators - OrderBy
            Console.WriteLine("5. Sắp xếp danh sách phim theo bảng chữ cái.");
            xuly.SX_DSPhim();
            Console.WriteLine("\n");

            //Projection Operators - Select
            Console.WriteLine("6. In danh sách đĩa.");
            xuly.In_DSDia();
            Console.WriteLine("\n");

            //Set Operators - Distinct
            Console.WriteLine("7. In thông tin tất cả khách hàng và ngày đầu tiên họ thuê phim.");
            xuly.TT_KH();
            Console.WriteLine("\n");

            //Aggregate Operators - Count
            Console.WriteLine("8. Tính toán phần trăm (tần suất) diễn viên đóng ở tất cả các phim.");
            xuly.TS_DV();
            Console.WriteLine("\n");

            //Grouping Operators - GroupBy
            Console.WriteLine("9. In ra mối quan hệ giữa đĩa và phim thông qua mã đĩa.");
            xuly.In_DSDia_Phim();




            /*
             * Dưới đây là phần menu
             * 
            Console.WriteLine("\t\t\t\tDANH SÁCH CÁC CHỨC NĂNG CHO CỬA HÀNG THUÊ PHIM\n");
            Console.WriteLine("0. Thoát.");
            Console.WriteLine("1. Tìm kiếm thông tin khách hàng thông qua mã khách hàng.");
            Console.WriteLine("2. Tìm kiếm thông tin diễn viên thông qua tên phim.");
            Console.WriteLine("3. Kiểm tra phim có nằm trong đĩa hay không.");
            Console.WriteLine("4. Kiểm tra mã phim thông qua chữ cái.");

            Console.WriteLine("5. Sắp xếp danh sách phim theo bảng chữ cái.");
            Console.WriteLine("6. In danh sách đĩa.");
            Console.WriteLine("7. In thông tin tất cả khách hàng và ngày đầu tiên họ thuê phim.");
            Console.WriteLine("8. Tính toán phần trăm (tần suất) diễn viên đóng ở tất cả các phim.");
            Console.WriteLine("9. In ra mối quan hệ giữa đĩa và phim thông qua mã đĩa.");
            int check = 1;
            string chuoi = "";
            string chuoi_1 = "";
            while (check != 0)
            {
                Console.Write("\nMời bạn nhập lựa chọn: "); check = int.Parse(Console.ReadLine());
                switch (check)
                {
                    case 0:
                        goto KETTHUC;
                    case 1:
                        Console.Write("Mời bạn nhập mã khách hàng: ");
                        chuoi = Console.ReadLine();
                        //Element Operators - FirstOrDefault - Condition
                        xuly.TT_ThueDia(chuoi);
                        break;
                    case 2:
                        Console.Write("Mời bạn nhập tên phim: ");
                        chuoi = Console.ReadLine();
                        //Join Operators - Cross Join
                        xuly.TT_Phim_DV(chuoi);
                        break;
                    case 3:
                        Console.Write("Mời bạn nhập mã đĩa: ");
                        chuoi = Console.ReadLine();
                        Console.Write("Mời bạn nhập tên phim: ");
                        chuoi_1 = Console.ReadLine();
                        //Quantifiers - Any
                        //Restriction Operators - Where
                        xuly.KT_DP(chuoi, chuoi_1);
                        break;
                    case 4:
                        Console.Write("Mời bạn nhập chữ cái: ");
                        chuoi = Console.ReadLine();
                        //Quantifiers - All
                        xuly.KT_PMa(chuoi);
                        break;
                    case 5:
                        //Ordering Operators - OrderBy
                        xuly.SX_DSPhim();
                        break;
                    case 6:
                        //Projection Operators - Select
                        xuly.In_DSDia();
                        break;
                    case 7:
                        //Set Operators - Distinct
                        xuly.TT_KH();
                        break;
                    case 8:
                        //Aggregate Operators - Count
                        xuly.TS_DV();
                        break;
                    case 9:
                        //Grouping Operators - GroupBy
                        xuly.In_DSDia_Phim();
                        break;

                }
            }
        KETTHUC:
            {
                Console.WriteLine("Qua trinh ket thuc....");
            }
            */

            Console.ReadKey();
        }
    }
}
