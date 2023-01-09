using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1
{
    public class XuLy
    {
        public List<T_Phim> dsPhim = new List<T_Phim>();
        public List<T_KhachHang> dsKhachHang = new List<T_KhachHang>();
        public List<T_DienVien> dsDienVien = new List<T_DienVien>();
        public List<T_Dia> dsDia = new List<T_Dia>();

        public List<T_Phim_DienVien> dsP_DV = new List<T_Phim_DienVien>();
        public List<T_Dia_Phim> dsD_P = new List<T_Dia_Phim>();
        public List<T_ThueDia> dsTD = new List<T_ThueDia>();
        public void taoDSPhim()
        {
            dsPhim.Add(new T_Phim("P001", "Dòng Đời"));
            dsPhim.Add(new T_Phim("P002", "Mặt trời đêm"));
            dsPhim.Add(new T_Phim("P003", "Bông hoa rừng Sác"));
            dsPhim.Add(new T_Phim("P004", "Người đẹp Tây Đô"));
            dsPhim.Add(new T_Phim("P005", "Mùi ngò gai"));
            dsPhim.Add(new T_Phim("P006", "Xóm suối sâu"));
            dsPhim.Add(new T_Phim("P007", "Lâu đài tình ái"));
            dsPhim.Add(new T_Phim("P008", "Xóm trọ"));
            dsPhim.Add(new T_Phim("P009", "Phạm Công Cúc Hoa"));
            dsPhim.Add(new T_Phim("P010", "Dollar trắng"));
        }
        public void taoDSDienVien()
        {
            dsDienVien.Add(new T_DienVien("DV0001", "Võ Sông Hương", "Việt Nam"));
            dsDienVien.Add(new T_DienVien("DV0002", "Lý Hùng", "Việt Nam"));
            dsDienVien.Add(new T_DienVien("DV0003", "Quang Đại", "Việt Nam"));
            dsDienVien.Add(new T_DienVien("DV0004", "Chí Tài", "Mỹ"));
            dsDienVien.Add(new T_DienVien("DV0005", "Hoài Linh", "Mỹ"));

        }
        public void taoDSKhachHang()
        {
            dsKhachHang.Add(new T_KhachHang("KH0001", "Nguyễn Văn Nam", "123 Võ Văn Ngân"));
            dsKhachHang.Add(new T_KhachHang("KH0002", "Lê Thanh Nhàn", "321 Đặng Văn Bi"));
            dsKhachHang.Add(new T_KhachHang("KH0003", "Trần Hùng", "213 Kha Vạn Cân"));

        }
        public void taoDSDia()
        {
            dsDia.Add(new T_Dia("D0001", "Tuyển Phim Võ Sông Hương"));
            dsDia.Add(new T_Dia("D0002", "Tuyển Phim Lý Hùng"));
            dsDia.Add(new T_Dia("D0003", "Tuyển Phim Quang Đại"));
            dsDia.Add(new T_Dia("D0004", "Tuyển Phim Chí Tài"));
            dsDia.Add(new T_Dia("D0005", "Tuyển Phim Hoài Linh - Chí Tài"));

        }

        public void taoDSP_DV()
        {
            dsP_DV.Add(new T_Phim_DienVien(dsPhim[0], dsDienVien[0], dsPhim[0].MaPhim, dsDienVien[0].MaDienVien, true));
            dsP_DV.Add(new T_Phim_DienVien(dsPhim[1], dsDienVien[1], dsPhim[1].MaPhim, dsDienVien[1].MaDienVien, true));
            dsP_DV.Add(new T_Phim_DienVien(dsPhim[2], dsDienVien[0], dsPhim[2].MaPhim, dsDienVien[0].MaDienVien, true));
            dsP_DV.Add(new T_Phim_DienVien(dsPhim[3], dsDienVien[0], dsPhim[3].MaPhim, dsDienVien[0].MaDienVien, true));
            dsP_DV.Add(new T_Phim_DienVien(dsPhim[4], dsDienVien[2], dsPhim[4].MaPhim, dsDienVien[2].MaDienVien, false));
            dsP_DV.Add(new T_Phim_DienVien(dsPhim[5], dsDienVien[2], dsPhim[5].MaPhim, dsDienVien[2].MaDienVien, false));
            dsP_DV.Add(new T_Phim_DienVien(dsPhim[6], dsDienVien[3], dsPhim[6].MaPhim, dsDienVien[3].MaDienVien, true));
            dsP_DV.Add(new T_Phim_DienVien(dsPhim[7], dsDienVien[3], dsPhim[7].MaPhim, dsDienVien[3].MaDienVien, true));
            dsP_DV.Add(new T_Phim_DienVien(dsPhim[8], dsDienVien[4], dsPhim[8].MaPhim, dsDienVien[4].MaDienVien, true));
            dsP_DV.Add(new T_Phim_DienVien(dsPhim[9], dsDienVien[1], dsPhim[9].MaPhim, dsDienVien[1].MaDienVien, true));
        }
        public void taoDSD_P()
        {
            dsD_P.Add(new T_Dia_Phim(dsDia[0], dsPhim[0], dsDia[0].MaDia, dsPhim[0].MaPhim));
            dsD_P.Add(new T_Dia_Phim(dsDia[0], dsPhim[1], dsDia[0].MaDia, dsPhim[1].MaPhim));
            dsD_P.Add(new T_Dia_Phim(dsDia[0], dsPhim[2], dsDia[0].MaDia, dsPhim[2].MaPhim));
            dsD_P.Add(new T_Dia_Phim(dsDia[0], dsPhim[3], dsDia[0].MaDia, dsPhim[3].MaPhim));
            dsD_P.Add(new T_Dia_Phim(dsDia[1], dsPhim[8], dsDia[1].MaDia, dsPhim[8].MaPhim));
            dsD_P.Add(new T_Dia_Phim(dsDia[1], dsPhim[9], dsDia[1].MaDia, dsPhim[9].MaPhim));
            dsD_P.Add(new T_Dia_Phim(dsDia[2], dsPhim[4], dsDia[2].MaDia, dsPhim[4].MaPhim));
            dsD_P.Add(new T_Dia_Phim(dsDia[2], dsPhim[5], dsDia[2].MaDia, dsPhim[5].MaPhim));
            dsD_P.Add(new T_Dia_Phim(dsDia[3], dsPhim[6], dsDia[3].MaDia, dsPhim[6].MaPhim));
            dsD_P.Add(new T_Dia_Phim(dsDia[4], dsPhim[7], dsDia[4].MaDia, dsPhim[7].MaPhim));
        }
        public void taoDSTD()
        {
            dsTD.Add(new T_ThueDia(dsKhachHang[0], dsDia[1], dsKhachHang[0].MaKhachHang, dsDia[1].MaDia, "09/11/2021", "10/11/2021"));
            dsTD.Add(new T_ThueDia(dsKhachHang[0], dsDia[0], dsKhachHang[0].MaKhachHang, dsDia[0].MaDia, "10/11/2021", "12/11/2021"));
            dsTD.Add(new T_ThueDia(dsKhachHang[0], dsDia[2], dsKhachHang[0].MaKhachHang, dsDia[2].MaDia, "13/11/2021", "18/11/2021"));
            dsTD.Add(new T_ThueDia(dsKhachHang[1], dsDia[0], dsKhachHang[1].MaKhachHang, dsDia[0].MaDia, "07/11/2021", "08/11/2021"));
            dsTD.Add(new T_ThueDia(dsKhachHang[1], dsDia[2], dsKhachHang[1].MaKhachHang, dsDia[2].MaDia, "23/11/2021", "28/11/2021"));
            dsTD.Add(new T_ThueDia(dsKhachHang[2], dsDia[4], dsKhachHang[2].MaKhachHang, dsDia[4].MaDia, "01/11/2021", "04/11/2021"));
            dsTD.Add(new T_ThueDia(dsKhachHang[2], dsDia[3], dsKhachHang[2].MaKhachHang, dsDia[3].MaDia, "15/11/2021", "17/11/2021"));
        }

        public XuLy() { }

        //Truy xuất thông tin một khách hàng thông qua mã khách hàng
        public void TT_ThueDia(string MaKH)
        {
            var first = dsTD.FirstOrDefault(p => p.MaKhachHang == MaKH);
            if (first != null)
            {
                Console.Write(String.Format("{0,-40}", $"Mã khách Hàng: {first.khachhang.MaKhachHang}"));
                Console.Write(String.Format("{0,-40}", $"Tên khách hàng: {first.khachhang.TenKhachHang}"));
                Console.WriteLine(String.Format("{0,-40}", $"Địa chỉ: {first.khachhang.DiaChi}"));

                Console.Write(String.Format("{0,-40}", $"Mã đĩa khách mượn: {first.dia.MaDia}"));
                Console.Write(String.Format("{0,-40}", $"Tên đĩa: {first.dia.TenDia}"));
                Console.Write(String.Format("{0,-40}", $"Ngày thuê đầu tiên: {first.NgayThue}"));
                Console.WriteLine(String.Format("{0,-40}", $"Ngày trả: {first.NgayTra}"));
            }
            else
                Console.WriteLine("Không có mã khách hàng cần tìm.");
        }

        //Sắp xếp danh sách phim theo bảng chữ cái abc
        public void SX_DSPhim()
        {
            var ds = from p in dsP_DV orderby p.phim.TenPhim select p;
            foreach (var p in ds)
            {
                Console.Write(String.Format("{0,-40}", $"Tên phim: {p.phim.TenPhim}"));
                Console.WriteLine(String.Format("{0,-40}", $"Mã phim: {p.MaPhim}"));

                Console.Write(String.Format("{0,-40}", $"\tTên diễn viên: {p.dienvien.TenDienVien}"));
                Console.Write(String.Format("{0,-40}", $"Quốc tịch: {p.dienvien.QuocTich}"));
                string vai = p.vaiChinh == true ? "chính" : "phụ";
                Console.WriteLine(String.Format("{0,-40}", $"Thủ vai: {vai}"));
            }
        }

        //Trả lời cho câu hỏi: phim này ai đóng?
        public void TT_Phim_DV(string tenphim)
        {
            var q =
                from c in dsPhim
                join p in dsP_DV on c equals p.phim
                select new { TenPhim = c.TenPhim, p.dienvien.TenDienVien };

            var kq = q.FirstOrDefault(p => p.TenPhim == tenphim);
            Console.WriteLine(kq.TenPhim + ": " + kq.TenDienVien);
            
        }

        //In ra danh sách đĩa
        public void In_DSDia()
        {
            var ds = dsDia.Select(d => d);
            foreach (var n in ds)
            {
                Console.Write(String.Format("{0,-40}", $"Mã đĩa: {n.MaDia}"));
                Console.WriteLine(String.Format("{0,-40}", $"Tên đĩa: {n.TenDia}"));
            }
        }

        //Kiểm tra đĩa có phim không?
        public void KT_DP(string madia, string tenphim)
        {
            var ds = from p in dsD_P where p.MaDia == madia select p;
            bool kq = ds.Any(t => t.phim.TenPhim.Contains(tenphim));
            if (kq)
                Console.WriteLine("Trong mã đĩa {0} có phim {1}.", madia, tenphim);
            else
                Console.WriteLine("Trong mã đĩa {0} không có phim {1}.", madia, tenphim);
        }
    
        //Thông tin tất cả khách hàng và in ra ngày đầu tiên họ thuê phim
        public void TT_KH ()
        {
            var dsMa = dsTD.Select(ma => ma.MaKhachHang);
            var ds = dsMa.Distinct();
            foreach (var t in ds)
            {
                TT_ThueDia(t);
                Console.WriteLine();
            }
        }
    
        //Tính toán phần trăm (tần suất) diễn viên đóng ở tất cả các phim
        public void TS_DV()
        {
            List<List<string>> ds = new List<List<string>>();
            var dsMa = dsP_DV.Select(ma => ma.MaDienVien);
            var maduynhat = dsMa.Distinct();
            
            foreach (var p in maduynhat)
            {
                List<string> flag = new List<string>();
                foreach (var h in dsMa)
                    if (h == p)
                        flag.Add(h);
                ds.Add(flag);
            }
            var sl_Phim = dsMa.Count();
            int count = 0;
            foreach (var item in ds)
            {
                Console.Write(String.Format("{0,-40}", $"Diễn viên: {dsDienVien[count++].TenDienVien}"));
                Console.WriteLine(String.Format("{0,-40}", $"Tần suất đóng phim: {item.Count * 100 / sl_Phim}%"));
            }
        }
        
        //In ra mối quan hệ giữa đĩa và phim thông qua mã đĩa
        public void In_DSDia_Phim()
        {
            var kq = dsD_P.GroupBy(dp => dp.MaDia);
            foreach (var group in kq)
            {
                Console.WriteLine("Mã đĩa: {0}", group.Key);
                foreach (var item in group)
                {
                    Console.Write(String.Format("{0,-40}", $"\tTên đĩa: {item.dia.TenDia}"));
                    Console.Write(String.Format("{0,-40}", $"\tTên phim: {item.phim.TenPhim}"));
                    Console.WriteLine(String.Format("{0,-40}", $"\tMã phim: {item.phim.MaPhim}"));
                }
            }
        }
    
        //Kiểm tra tất cả mã phim có phải bắt đầu bằng bằng ký tự 'P' hay không
        public void KT_PMa(string _char)
        {
            bool kq = dsPhim.All(w => w.MaPhim.Substring(0,1).Contains(_char));
            if (kq)
                Console.WriteLine("Tất cả mã phim đều bắt đầu bằng ký tự {0}", _char);
            else
                Console.WriteLine("Tất cả mã phim đều không bắt đầu bằng ký tự {0}", _char);

        }
    }
}
