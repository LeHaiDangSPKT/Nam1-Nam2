using System;
using System.Collections.Generic;
using System.Text;

namespace ConsoleApp1
{
    public class T_KhachHang
    {
        public string MaKhachHang { get; set; } // primary key
        public string TenKhachHang { get; set; }
        public string DiaChi { get; set; }


        // constructor
        public T_KhachHang() { }
        public T_KhachHang(T_KhachHang kh)
        {
            this.MaKhachHang = kh.MaKhachHang;
            this.TenKhachHang = kh.TenKhachHang;
            this.DiaChi = kh.DiaChi;
        }

        public T_KhachHang(string MaKhachHang, string TenKhachHang, string DiaChi)
        {
            this.MaKhachHang = MaKhachHang;
            this.TenKhachHang = TenKhachHang;
            this.DiaChi = DiaChi;
        }
    }
}
