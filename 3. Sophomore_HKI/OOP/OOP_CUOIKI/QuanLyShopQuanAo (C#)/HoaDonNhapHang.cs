using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace QuanLyShopQuanAo
{
    public class HoaDonNhapHang
    {
        public string maHoaDonNhapHang { get; set; }     // primary key
        public DateTime ngayNhap { get; set; }
        public double donGia { get; set; }

        // foreign key
        public string maNoiCungCap { get; set; }
        public string maNhanVien { get; set; }

        // singular
        public NoiCungCap noiCungCap { get; set; }
        public NhanVien nhanVien { get; set; }

        // plural
        public ICollection<ChiTietHoaDonNhapHang> dsChiTiet_HoaDonNhap { get; set; }

        // constructor
        public HoaDonNhapHang() { }
        public HoaDonNhapHang(HoaDonNhapHang hoaDonNhap)
        {
            this.maHoaDonNhapHang = hoaDonNhap.maHoaDonNhapHang;
            this.ngayNhap = hoaDonNhap.ngayNhap;
            this.donGia = hoaDonNhap.donGia;
            this.maNoiCungCap = hoaDonNhap.maNoiCungCap;
            this.maNhanVien = hoaDonNhap.maNhanVien;
            this.noiCungCap = hoaDonNhap.noiCungCap;
            this.nhanVien = hoaDonNhap.nhanVien;
            this.dsChiTiet_HoaDonNhap = hoaDonNhap.dsChiTiet_HoaDonNhap;
        }
        public HoaDonNhapHang(string maHoaDonNhapHang, DateTime ngayNhap, double donGia, 
            string maNoiCungCap, string maNhanVien,NoiCungCap noiCungCap, 
            NhanVien nhanVien, ICollection<ChiTietHoaDonNhapHang> dsChiTiet_HoaDonNhap)
        {
            this.maHoaDonNhapHang = maHoaDonNhapHang;
            this.ngayNhap = ngayNhap;
            this.donGia = donGia;
            this.maNoiCungCap = maNoiCungCap;
            this.maNhanVien = maNhanVien;
            this.noiCungCap = noiCungCap;
            this.nhanVien = nhanVien;
            this.dsChiTiet_HoaDonNhap = dsChiTiet_HoaDonNhap;
        }
    }
}
