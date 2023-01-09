using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace QuanLyShopQuanAo
{
    public class LoaiKhachHang
    {
        public string maLoaiKhachHang { get; set; }     // primary key
        public string tenLoaiKhachHang { get; set; }

        // constructor
        public LoaiKhachHang() { }
        public LoaiKhachHang(LoaiKhachHang loaiKhachHang)
        {
            this.maLoaiKhachHang = loaiKhachHang.maLoaiKhachHang;
            this.tenLoaiKhachHang = loaiKhachHang.tenLoaiKhachHang;           
        }
        public LoaiKhachHang(string maLoaiKhachHang, string tenLoaiKhachHang)
        {
            this.maLoaiKhachHang = maLoaiKhachHang;
            this.tenLoaiKhachHang = tenLoaiKhachHang;
        }
    }
}
