using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace QuanLyShopQuanAo
{
    public class SanPham
    {
        public string maSanPham { get; set; }     // primary key
        public string tenSanPham { get; set; }

        // foreign key
        public string mathuongHieu { get; set; }
        public string maPhieuBaoHanh { get; set; }

        // singular
        public ThuongHieu thuongHieu { get; set; }
        public PhieuBaoHanh phieuBaoHanh { get; set; }

        // plural
        public ICollection<ChiTietHoaDonNhapHang> dsChiTietNhap_SanPham { get; set; }
        public ICollection<ChiTietHoaDonMuaHang> dsChiTietMua_SanPham { get; set; }

        // constructor
        public SanPham() { }
        public SanPham(SanPham sanPham)
        {
            this.maSanPham = sanPham.maSanPham;
            this.tenSanPham = sanPham.tenSanPham;
            this.mathuongHieu = sanPham.mathuongHieu;
            this.maPhieuBaoHanh = sanPham.maPhieuBaoHanh;
            this.thuongHieu = sanPham.thuongHieu;
            this.phieuBaoHanh = sanPham.phieuBaoHanh;
            this.dsChiTietNhap_SanPham = sanPham.dsChiTietNhap_SanPham;
            this.dsChiTietMua_SanPham = sanPham.dsChiTietMua_SanPham;
        }
        public SanPham(string maSanPham, string tenSanPham, string mathuongHieu, string maPhieuBaoHanh,
            ThuongHieu thuongHieu,PhieuBaoHanh phieuBaoHanh, ICollection<ChiTietHoaDonNhapHang> dsChiTietNhap_SanPham,
            ICollection<ChiTietHoaDonMuaHang> dsChiTietMua_SanPham)
        {
            this.maSanPham = maSanPham;
            this.tenSanPham = tenSanPham;
            this.mathuongHieu = mathuongHieu;
            this.maPhieuBaoHanh = maPhieuBaoHanh;
            this.thuongHieu = thuongHieu;
            this.phieuBaoHanh = phieuBaoHanh;
            this.dsChiTietNhap_SanPham = dsChiTietNhap_SanPham;
            this.dsChiTietMua_SanPham = dsChiTietMua_SanPham;
        }
    }
}
