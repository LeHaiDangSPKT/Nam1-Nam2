using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace QuanLyShopQuanAo
{
    public class KhachHang
    {
        public string maKhachHang { get; set; }     // primary key
        public string tenKhachHang { get; set; }
        public string diaChi { get; set; }
        public string SDT { get; set; }
        // foreign key
        public string maLoaiKhachHang { get; set; }     

        // singular
        public LoaiKhachHang loaiKhachHang { get; set; }

        // plural
        public ICollection<HoaDonMuaHang> dsHoaDon_KhachHang { get; set; }

        // constructor
        public KhachHang() { }
        public KhachHang(KhachHang khachHang)
        {
            this.maKhachHang = khachHang.maKhachHang;
            this.tenKhachHang = khachHang.tenKhachHang;
            this.diaChi = khachHang.diaChi;
            this.SDT = khachHang.SDT;
            this.maLoaiKhachHang = khachHang.maLoaiKhachHang; 
            this.loaiKhachHang = khachHang.loaiKhachHang;
            this.dsHoaDon_KhachHang = khachHang.dsHoaDon_KhachHang;
        }
         public KhachHang (string maKhachHang, string tenKhachHang, string diaChi, string SDT, string maLoaiKhachHang,
             LoaiKhachHang loaiKhachHang, ICollection<HoaDonMuaHang> dsHoaDon_KhachHang)
        {
            this.maKhachHang = maKhachHang;
            this.tenKhachHang = tenKhachHang;
            this.diaChi = diaChi;
            this.SDT = SDT;
            this.maLoaiKhachHang = maLoaiKhachHang; 
            this.loaiKhachHang = loaiKhachHang;
            this.dsHoaDon_KhachHang = dsHoaDon_KhachHang;
        }
    }
}
