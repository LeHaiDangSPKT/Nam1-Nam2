using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace QuanLyShopQuanAo
{
    public class HoaDonMuaHang
    {
        public string maHoaDonMuaHang { get; set; }     // primary key
        public DateTime ngayMua { get; set; }
        public double donGia { get; set; }

        // foreign key
        public string maNhanVien { get; set; }
        public string maKhachHang { get; set; }
        public string maHinhThucThanhToan { get; set; }

        // singular
        public NhanVien nhanVien { get; set; }
        public KhachHang khachHang { get; set; }
        public HinhThucThanhToan hinhThucThanhToan { get; set; }

        // plural
        public ICollection<ChiTietHoaDonMuaHang> dsChiTiet_HoaDonMua { get; set; }

        // constructor
        public HoaDonMuaHang() { }
        public HoaDonMuaHang(HoaDonMuaHang hoaDonMua) 
        {
            this.maHoaDonMuaHang = hoaDonMua.maHoaDonMuaHang;
            this.ngayMua = hoaDonMua.ngayMua;
            this.donGia = hoaDonMua.donGia;
            this.maNhanVien = hoaDonMua.maNhanVien;
            this.maKhachHang = hoaDonMua.maKhachHang;
            this.maHinhThucThanhToan = hoaDonMua.maHinhThucThanhToan;
            this.nhanVien = hoaDonMua.nhanVien;
            this.khachHang = hoaDonMua.khachHang;
            this.hinhThucThanhToan = hoaDonMua.hinhThucThanhToan;
            this.dsChiTiet_HoaDonMua = hoaDonMua.dsChiTiet_HoaDonMua;
        }
        public HoaDonMuaHang(string maHoaDonMuaHang, DateTime ngayMua, double donGia, string maNhanVien,
             string maKhachHang, string maHinhThucThanhToan, NhanVien nhanVien, KhachHang khachHang,
             HinhThucThanhToan hinhThucThanhToan, ICollection<ChiTietHoaDonMuaHang> dsChiTiet_HoaDonMua)
        {
            this.maHoaDonMuaHang = maHoaDonMuaHang;
            this.ngayMua = ngayMua;
            this.donGia = donGia;
            this.maNhanVien = maNhanVien;
            this.maKhachHang = maKhachHang;
            this.maHinhThucThanhToan = maHinhThucThanhToan;
            this.nhanVien = nhanVien;
            this.khachHang = khachHang;
            this.hinhThucThanhToan = hinhThucThanhToan;
            this.dsChiTiet_HoaDonMua = dsChiTiet_HoaDonMua;
        }
    }
}
