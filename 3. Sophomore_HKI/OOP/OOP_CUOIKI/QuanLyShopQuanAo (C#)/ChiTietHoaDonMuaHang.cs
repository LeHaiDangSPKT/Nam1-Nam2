using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace QuanLyShopQuanAo
{
    public class ChiTietHoaDonMuaHang
    {
        public string maHoaDonMuaHang { get; set; }     // primary key
        public string maSanPham { get; set; }     // primary key
        public int soLuong { get; set; }
        public double donGia { get; set; }

        // singular
        public HoaDonMuaHang hoaDonMuaHang { get; set; }
        public SanPham sanPham { get; set; }

        // constructor
        public ChiTietHoaDonMuaHang() { }
        public ChiTietHoaDonMuaHang(ChiTietHoaDonMuaHang chiTietHoaDonMua)
        {
            this.maHoaDonMuaHang = chiTietHoaDonMua.maHoaDonMuaHang;
            this.maSanPham = chiTietHoaDonMua.maSanPham;
            this.soLuong = chiTietHoaDonMua.soLuong;
            this.donGia = chiTietHoaDonMua.donGia;
            this.hoaDonMuaHang = chiTietHoaDonMua.hoaDonMuaHang;
            this.sanPham = chiTietHoaDonMua.sanPham;
        }
        public ChiTietHoaDonMuaHang(string maHoaDonMuaHang, string maSanPham, int soLuong, double donGia,
            HoaDonMuaHang hoaDonMuaHang, SanPham sanPham)
        {
            this.maHoaDonMuaHang = maHoaDonMuaHang;
            this.maSanPham = maSanPham;
            this.soLuong = soLuong;
            this.donGia = donGia;
            this.hoaDonMuaHang = hoaDonMuaHang;
            this.sanPham = sanPham;
        }

    }
}
