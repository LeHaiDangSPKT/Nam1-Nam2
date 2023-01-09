using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace QuanLyShopQuanAo
{
    public class ChiTietHoaDonNhapHang
    {
        public string maHoaDonNhapHang { get; set; }     // primary key
        public string maSanPham { get; set; }       // primary key
        public int soLuong { get; set; }
        public double donGia { get; set; }

        //singular
        public HoaDonNhapHang hoaDonNhapHang { get; set; }
        public SanPham sanPham { get; set; }

        // constructor
        public ChiTietHoaDonNhapHang() { }
        public ChiTietHoaDonNhapHang(ChiTietHoaDonNhapHang chiTietHoaDonNhap)
        {
            this.maHoaDonNhapHang = chiTietHoaDonNhap.maHoaDonNhapHang;
            this.maSanPham = chiTietHoaDonNhap.maSanPham;
            this.soLuong = chiTietHoaDonNhap.soLuong;
            this.donGia = chiTietHoaDonNhap.donGia;
            this.hoaDonNhapHang = chiTietHoaDonNhap.hoaDonNhapHang;
            this.sanPham = chiTietHoaDonNhap.sanPham;
        }
        public ChiTietHoaDonNhapHang(string maHoaDonNhapHang, string maSanPham, int soLuong, double donGia,
            HoaDonNhapHang hoaDonNhapHang, SanPham sanPham)
        {
            this.maHoaDonNhapHang = maHoaDonNhapHang;
            this.maSanPham = maSanPham;
            this.soLuong = soLuong;
            this.donGia = donGia;
            this.hoaDonNhapHang = hoaDonNhapHang;
            this.sanPham = sanPham;
        }
    }
}
