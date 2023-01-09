using System;
using System.Collections.Generic;
using System.Text;

namespace QuanLySanPham
{
    public static class CongTy
    {
        private static string sTenCongTy;

        private static List<SanPham> lSP { get; set; }

        public static void Nhap()
        {
            lSP = new List<SanPham>();
            Console.Write("Nhap ten Cong ty: ");
            sTenCongTy = Console.ReadLine();

            Console.WriteLine();
            int soMayLanh = 0;
            int soDienThoai = 0;
            int soTiVi = 0;
            Console.Write("Nhap so may lanh: ");
            soMayLanh = Convert.ToInt32(Console.ReadLine());
            for (int i = 0; i < soMayLanh; i++)
            {
                MayLanh mayLanh = new MayLanh();
                mayLanh.Nhap();
                mayLanh.TinhGiaTien();
                lSP.Add(mayLanh);
            }

            Console.WriteLine();

            Console.Write("Nhap so dien thoai: ");
            soDienThoai = Convert.ToInt32(Console.ReadLine());
            for (int j = 0; j < soDienThoai; j++)
            {
                DienThoai dienThoai = new DienThoai();
                dienThoai.Nhap();
                dienThoai.TinhGiaTien();
                lSP.Add(dienThoai);
            }

            Console.WriteLine();

            Console.Write("Nhap so ti vi: ");
            soTiVi = Convert.ToInt32(Console.ReadLine());
            for (int j = 0; j < soTiVi; j++)
            {
                TiVi tiiVi = new TiVi();
                tiiVi.Nhap();
                tiiVi.TinhGiaTien();
                lSP.Add(tiiVi);
            }
        }
        public static void SapXep()
        {
            for (int i = 0; i < lSP.Count - 1; i++)
                for (int j = i+1; j < lSP.Count; j++)
                    if (lSP[i].giaTien > lSP[j].giaTien)
                    {
                        SanPham temp = lSP[i];
                        lSP[i] = lSP[j];
                        lSP[j] = temp;
                    }
        }
        public static double GiaTienLonNhat(List<SanPham> lSP)
        {
            double max = lSP[0].giaTien;
            for (int i=1; i<lSP.Count; i++)
            {
                if (lSP[i].giaTien > max)
                {
                    max = lSP[i].giaTien;
                }
            }
            return max;
        }
        public static double GiaTienNhoNhat(List<SanPham> lSP)
        {
            double min = lSP[0].giaTien;
            for (int i = 1; i < lSP.Count; i++)
            {
                if (lSP[i].giaTien < min)
                {
                    min = lSP[i].giaTien;
                }
            }
            return min;
        }
        public static void Xuat()
        {
            Console.WriteLine("Thong tin cong ty " + sTenCongTy + " (sap xep theo gia):");
            Console.WriteLine();
            Console.WriteLine($"{"Ma San Pham",20}|{"Ten San Pham",20}|{"Mau San Pham",20}|{"Gia",20}");

            foreach (SanPham sp in lSP)
            {
                sp.TinhGiaTien();
                sp.Xuat();
            }
            Console.WriteLine();
            Console.WriteLine("San pham co gia tien lon nhat: {0}", GiaTienLonNhat(lSP));
            Console.WriteLine();
            Console.WriteLine("San pham co gia tien nho nhat: {0}", GiaTienNhoNhat(lSP));



        }
    }
}
