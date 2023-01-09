using System;
using System.Collections.Generic;
using System.Text;

namespace ConsoleApp1
{
    public class T_ThueDia
    {
        public string MaKhachHang { get; set; }
        public string MaDia { get; set; }
        public string NgayThue { get; set; }
        public string NgayTra { get; set; }
        public T_ThueDia () { }
        public T_ThueDia(T_KhachHang kh, T_Dia d, string MaKhachHang, string MaDia, string NgayThue, string NgayTra)
        {
            this.khachhang = kh;
            this.dia = d;
            this.MaKhachHang = MaKhachHang;
            this.MaDia = MaDia;
            this.NgayThue = NgayThue;
            this.NgayTra = NgayTra;
        }

        public T_KhachHang khachhang { get; set; }
        public T_Dia dia { get; set; }

        public T_ThueDia(T_ThueDia td)
        {
            this.NgayThue = td.NgayThue;
            this.NgayTra = td.NgayTra;
            this.MaKhachHang = td.MaKhachHang;
            this.MaDia = td.MaDia;
        }
    }
}
