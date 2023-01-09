using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace QuanLyShopQuanAo
{
    class Program
    {
        public static List<KhachHang> dsKhachHang = new List<KhachHang>();
        public static List<LoaiKhachHang> dsLoaiKhachHang = new List<LoaiKhachHang>();
        public static List<NhanVien> dsNhanVien = new List<NhanVien>();
        public static List<LoaiNhanVien> dsLoaiNhanVien = new List<LoaiNhanVien>();
        public static List<HinhThucThanhToan> dsHinhThucThanhToan = new List<HinhThucThanhToan>();
        public static List<NoiCungCap> dsNoiCungCap = new List<NoiCungCap>();
        public static List<PhieuBaoHanh> dsPhieuBaoHanh = new List<PhieuBaoHanh>();
        public static List<ThuongHieu> dsThuongHieu = new List<ThuongHieu>();
        public static List<SanPham> dsSanPham = new List<SanPham>();
        public static List<HoaDonNhapHang> dsHoaDonNhapHang = new List<HoaDonNhapHang>();
        public static List<ChiTietHoaDonNhapHang> dsChiTietHDNhapHang = new List<ChiTietHoaDonNhapHang>();
        public static List<HoaDonMuaHang> dsHoaDonMuaHang = new List<HoaDonMuaHang>();
        public static List<ChiTietHoaDonMuaHang> dsChiTietHDMuaHang = new List<ChiTietHoaDonMuaHang>();

        public static void taoDSNoiCungCap()
        {
            dsNoiCungCap.Add(new NoiCungCap("NCC001", "Công ty Khang Thịnh", "Quận Tân Phú ", "0914296114"));
            dsNoiCungCap.Add(new NoiCungCap("NCC002", "Công ty Quang Minh ", "Quận Gò Vấp  ", "0937168727"));
            dsNoiCungCap.Add(new NoiCungCap("NCC003", "Công ty Thượng Tín ", "Quận 1       ", "0969362659"));
            dsNoiCungCap.Add(new NoiCungCap("NCC004", "Công ty Hoàng Phát ", "Quận Tân Bình", "0905638002"));
        }       
        public static void taoDSThuongHieu()
        {
            dsThuongHieu.Add(new ThuongHieu("TH001", "Calvin Klein")); // 1 sp
            dsThuongHieu.Add(new ThuongHieu("TH002", "Levis       ")); // 1 sp
            dsThuongHieu.Add(new ThuongHieu("TH003", "Lacoste     ")); // 2 sp
            dsThuongHieu.Add(new ThuongHieu("TH004", "Owen        ")); // 3 sp
        }
        public static void taoDSPhieuBaoHanh()
        {
            dsPhieuBaoHanh.Add(new PhieuBaoHanh("PBH001", 1 )); 
            dsPhieuBaoHanh.Add(new PhieuBaoHanh("PBH002", 2 ));
            dsPhieuBaoHanh.Add(new PhieuBaoHanh("PBH003", 3 ));
            dsPhieuBaoHanh.Add(new PhieuBaoHanh("PBH004", 6 ));
            dsPhieuBaoHanh.Add(new PhieuBaoHanh("PBH005", 8 ));
            dsPhieuBaoHanh.Add(new PhieuBaoHanh("PBH006", 10));
            dsPhieuBaoHanh.Add(new PhieuBaoHanh("PBH007", 12));
        }
        public static void taoDSSanPham()
        {
            dsSanPham.Add(new SanPham("SP001", "Áo khoắc  ", dsThuongHieu[2].maThuongHieu, dsPhieuBaoHanh[0].maPhieuBaoHanh, dsThuongHieu[2], dsPhieuBaoHanh[0], new List<ChiTietHoaDonNhapHang>(), new List<ChiTietHoaDonMuaHang>()));
            dsSanPham.Add(new SanPham("SP002", "Áo thun   ", dsThuongHieu[2].maThuongHieu, dsPhieuBaoHanh[1].maPhieuBaoHanh, dsThuongHieu[2], dsPhieuBaoHanh[1], new List<ChiTietHoaDonNhapHang>(), new List<ChiTietHoaDonMuaHang>()));
            dsSanPham.Add(new SanPham("SP003", "Áo sơ mi  ", dsThuongHieu[3].maThuongHieu, dsPhieuBaoHanh[2].maPhieuBaoHanh, dsThuongHieu[3], dsPhieuBaoHanh[2], new List<ChiTietHoaDonNhapHang>(), new List<ChiTietHoaDonMuaHang>()));
            dsSanPham.Add(new SanPham("SP004", "Quần Jeans", dsThuongHieu[0].maThuongHieu, dsPhieuBaoHanh[3].maPhieuBaoHanh, dsThuongHieu[0], dsPhieuBaoHanh[3], new List<ChiTietHoaDonNhapHang>(), new List<ChiTietHoaDonMuaHang>()));
            dsSanPham.Add(new SanPham("SP005", "Quần Kaki ", dsThuongHieu[1].maThuongHieu, dsPhieuBaoHanh[4].maPhieuBaoHanh, dsThuongHieu[1], dsPhieuBaoHanh[4], new List<ChiTietHoaDonNhapHang>(), new List<ChiTietHoaDonMuaHang>()));
            dsSanPham.Add(new SanPham("SP006", "Quần Tây  ", dsThuongHieu[3].maThuongHieu, dsPhieuBaoHanh[5].maPhieuBaoHanh, dsThuongHieu[3], dsPhieuBaoHanh[5], new List<ChiTietHoaDonNhapHang>(), new List<ChiTietHoaDonMuaHang>()));
            dsSanPham.Add(new SanPham("SP007", "Quần Baggy", dsThuongHieu[3].maThuongHieu, dsPhieuBaoHanh[6].maPhieuBaoHanh, dsThuongHieu[3], dsPhieuBaoHanh[6], new List<ChiTietHoaDonNhapHang>(), new List<ChiTietHoaDonMuaHang>()));
        }
        public static void taoDSLoaiNhanVien()
        {
            dsLoaiNhanVien.Add(new LoaiNhanVien("LNV001", "Nhập kho")); // 2 nv
            dsLoaiNhanVien.Add(new LoaiNhanVien("LNV002", "Tư Vấn  ")); // 3 nv
        }
        public static void taoDSNhanVien()
        {
            dsNhanVien.Add(new NhanVien("NV001", "Huỳnh Văn Đồng  ", new DateTime(1995, 1, 1) , "Quận 9      ", "0905628002", 2015, dsLoaiNhanVien[0].maLoaiNhanVien, dsLoaiNhanVien[0])); // 6 năm
            dsNhanVien.Add(new NhanVien("NV002", "Hồ Thanh Danh   ", new DateTime(1994, 2, 2) , "Quận Thủ Đức", "0954168727", 2016, dsLoaiNhanVien[0].maLoaiNhanVien, dsLoaiNhanVien[0])); // 5 năm
            dsNhanVien.Add(new NhanVien("NV003", "Lê Thùy Trang   ", new DateTime(1996, 5, 11), "Quận 2      ", "0916396114", 2014, dsLoaiNhanVien[1].maLoaiNhanVien, dsLoaiNhanVien[1])); // 7 năm
            dsNhanVien.Add(new NhanVien("NV004", "Hoàng Gia Hân   ", new DateTime(1995, 8, 29), "Quận 9      ", "0985732659", 2015, dsLoaiNhanVien[1].maLoaiNhanVien, dsLoaiNhanVien[1])); // 6 năm
            dsNhanVien.Add(new NhanVien("NV005", "Nguyễn Trúc Linh", new DateTime(1996, 3, 24), "Quận 1      ", "0930628002", 2017, dsLoaiNhanVien[1].maLoaiNhanVien, dsLoaiNhanVien[1])); // 4 năm
        }
        public static void taoDSHoaDonNhapHang()
        {
            dsHoaDonNhapHang.Add(new HoaDonNhapHang("HDN001", new DateTime(2021, 1, 1) , 3200000, dsNoiCungCap[0].maNoiCungCap, dsNhanVien[0].maNhanVien, dsNoiCungCap[0], dsNhanVien[0], new List<ChiTietHoaDonNhapHang>()));
            dsHoaDonNhapHang.Add(new HoaDonNhapHang("HDN002", new DateTime(2021, 1, 10), 5250000, dsNoiCungCap[1].maNoiCungCap, dsNhanVien[1].maNhanVien, dsNoiCungCap[1], dsNhanVien[1], new List<ChiTietHoaDonNhapHang>()));
            dsHoaDonNhapHang.Add(new HoaDonNhapHang("HDN003", new DateTime(2021, 1, 20), 6000000, dsNoiCungCap[2].maNoiCungCap, dsNhanVien[0].maNhanVien, dsNoiCungCap[2], dsNhanVien[0], new List<ChiTietHoaDonNhapHang>()));
            dsHoaDonNhapHang.Add(new HoaDonNhapHang("HDN004", new DateTime(2021, 2, 1) , 3000000, dsNoiCungCap[3].maNoiCungCap, dsNhanVien[1].maNhanVien, dsNoiCungCap[3], dsNhanVien[1], new List<ChiTietHoaDonNhapHang>()));
            dsHoaDonNhapHang.Add(new HoaDonNhapHang("HDN005", new DateTime(2021, 2, 10), 500000, dsNoiCungCap[2].maNoiCungCap, dsNhanVien[0].maNhanVien, dsNoiCungCap[2], dsNhanVien[0], new List<ChiTietHoaDonNhapHang>()));
            dsHoaDonNhapHang.Add(new HoaDonNhapHang("HDN006", new DateTime(2021, 2, 20), 6000000, dsNoiCungCap[2].maNoiCungCap, dsNhanVien[0].maNhanVien, dsNoiCungCap[2], dsNhanVien[0], new List<ChiTietHoaDonNhapHang>()));
        }
        public static void taoDSChiTietHDNhapHang()
        {
            dsChiTietHDNhapHang.Add(new ChiTietHoaDonNhapHang(dsHoaDonNhapHang[0].maHoaDonNhapHang, dsSanPham[0].maSanPham, 20, 2000000, dsHoaDonNhapHang[0], dsSanPham[0]));//100
            dsChiTietHDNhapHang.Add(new ChiTietHoaDonNhapHang(dsHoaDonNhapHang[0].maHoaDonNhapHang, dsSanPham[3].maSanPham, 10, 1200000, dsHoaDonNhapHang[0], dsSanPham[3]));//120
            dsChiTietHDNhapHang.Add(new ChiTietHoaDonNhapHang(dsHoaDonNhapHang[1].maHoaDonNhapHang, dsSanPham[1].maSanPham, 15, 750000 , dsHoaDonNhapHang[1], dsSanPham[1]));//50
            dsChiTietHDNhapHang.Add(new ChiTietHoaDonNhapHang(dsHoaDonNhapHang[1].maHoaDonNhapHang, dsSanPham[4].maSanPham, 15, 4500000, dsHoaDonNhapHang[1], dsSanPham[4]));//300
            dsChiTietHDNhapHang.Add(new ChiTietHoaDonNhapHang(dsHoaDonNhapHang[2].maHoaDonNhapHang, dsSanPham[2].maSanPham, 10, 4000000, dsHoaDonNhapHang[2], dsSanPham[2]));//400
            dsChiTietHDNhapHang.Add(new ChiTietHoaDonNhapHang(dsHoaDonNhapHang[2].maHoaDonNhapHang, dsSanPham[5].maSanPham, 10, 2000000, dsHoaDonNhapHang[2], dsSanPham[5]));//200
            dsChiTietHDNhapHang.Add(new ChiTietHoaDonNhapHang(dsHoaDonNhapHang[3].maHoaDonNhapHang, dsSanPham[6].maSanPham, 20, 3000000, dsHoaDonNhapHang[3], dsSanPham[6]));//150
            dsChiTietHDNhapHang.Add(new ChiTietHoaDonNhapHang(dsHoaDonNhapHang[4].maHoaDonNhapHang, dsSanPham[1].maSanPham, 10, 500000 , dsHoaDonNhapHang[4], dsSanPham[1]));//50
            dsChiTietHDNhapHang.Add(new ChiTietHoaDonNhapHang(dsHoaDonNhapHang[5].maHoaDonNhapHang, dsSanPham[4].maSanPham, 20, 6000000, dsHoaDonNhapHang[5], dsSanPham[4]));//300
        }
        public static void taoDSLoaiKhachHang()
        {
            dsLoaiKhachHang.Add(new LoaiKhachHang("LKH001", "Cơ bản")); // 2 kh
            dsLoaiKhachHang.Add(new LoaiKhachHang("LKH002", "Thân Thiết")); // 2 kh
            dsLoaiKhachHang.Add(new LoaiKhachHang("LKH003", "VIP")); // 3 kh
        }
        public static void taoDSKhachHang()
        {
            dsKhachHang.Add(new KhachHang("KH001", "Võ Thị Cẩm Nhung", "Quận 9         ", "0965844647", dsLoaiKhachHang[0].maLoaiKhachHang, dsLoaiKhachHang[0], new List<HoaDonMuaHang>()));
            dsKhachHang.Add(new KhachHang("KH002", "Nguyễn Quang Huy", "Quận 2         ", "0997534464", dsLoaiKhachHang[0].maLoaiKhachHang, dsLoaiKhachHang[0], new List<HoaDonMuaHang>()));
            dsKhachHang.Add(new KhachHang("KH003", "Phạm Duy Phương ", "Quận 1         ", "0968572647", dsLoaiKhachHang[1].maLoaiKhachHang, dsLoaiKhachHang[1], new List<HoaDonMuaHang>()));
            dsKhachHang.Add(new KhachHang("KH004", "Nguyễn Thanh Sơn", "Quận Thủ Đức   ", "0978424647", dsLoaiKhachHang[1].maLoaiKhachHang, dsLoaiKhachHang[1], new List<HoaDonMuaHang>()));
            dsKhachHang.Add(new KhachHang("KH005", "Lê Thị Yến Nhi  ", "Quận Bình Thạnh", "0971544647", dsLoaiKhachHang[2].maLoaiKhachHang, dsLoaiKhachHang[2], new List<HoaDonMuaHang>()));
            dsKhachHang.Add(new KhachHang("KH006", "Huỳnh Thị Mỹ Anh", "Quận Thủ Đức   ", "0955844647", dsLoaiKhachHang[2].maLoaiKhachHang, dsLoaiKhachHang[2], new List<HoaDonMuaHang>()));
            dsKhachHang.Add(new KhachHang("KH007", "Trần Quốc Huy   ", "Quận 1         ", "0938744647", dsLoaiKhachHang[2].maLoaiKhachHang, dsLoaiKhachHang[2], new List<HoaDonMuaHang>())); // 3 hinh thuc thanh toan
        }
        public static void taoDSHinhThucThanhToan()
        {
            dsHinhThucThanhToan.Add(new HinhThucThanhToan("TT001", "Tiền mặt")); // 3 hoa don
            dsHinhThucThanhToan.Add(new HinhThucThanhToan("TT002", "Thẻ ATM ")); // 5 hoa don
            dsHinhThucThanhToan.Add(new HinhThucThanhToan("TT003", "Banking "));// 3 hoa don
        }
        public static void taoDSHoaDonMuaHang()
        {
            dsHoaDonMuaHang.Add(new HoaDonMuaHang("HDM001", new DateTime(2021, 3, 1) ,600000, dsNhanVien[4].maNhanVien, dsKhachHang[0].maKhachHang, dsHinhThucThanhToan[0].maHinhThucThanhToan, dsNhanVien[4], dsKhachHang[0], dsHinhThucThanhToan[0], new List<ChiTietHoaDonMuaHang>()));

            dsHoaDonMuaHang.Add(new HoaDonMuaHang("HDM002", new DateTime(2021, 4, 5) ,600000, dsNhanVien[3].maNhanVien, dsKhachHang[1].maKhachHang, dsHinhThucThanhToan[1].maHinhThucThanhToan, dsNhanVien[3], dsKhachHang[1], dsHinhThucThanhToan[1], new List<ChiTietHoaDonMuaHang>()));

            dsHoaDonMuaHang.Add(new HoaDonMuaHang("HDM003", new DateTime(2021, 3, 1) ,2600000, dsNhanVien[3].maNhanVien, dsKhachHang[2].maKhachHang, dsHinhThucThanhToan[0].maHinhThucThanhToan, dsNhanVien[3], dsKhachHang[2], dsHinhThucThanhToan[0], new List<ChiTietHoaDonMuaHang>()));

            dsHoaDonMuaHang.Add(new HoaDonMuaHang("HDM004", new DateTime(2021, 3, 15),3500000, dsNhanVien[3].maNhanVien, dsKhachHang[3].maKhachHang, dsHinhThucThanhToan[2].maHinhThucThanhToan, dsNhanVien[3], dsKhachHang[3], dsHinhThucThanhToan[2], new List<ChiTietHoaDonMuaHang>()));
            dsHoaDonMuaHang.Add(new HoaDonMuaHang("HDM005", new DateTime(2021, 4, 20),3500000, dsNhanVien[2].maNhanVien, dsKhachHang[3].maKhachHang, dsHinhThucThanhToan[1].maHinhThucThanhToan, dsNhanVien[2], dsKhachHang[3], dsHinhThucThanhToan[1], new List<ChiTietHoaDonMuaHang>()));

            dsHoaDonMuaHang.Add(new HoaDonMuaHang("HDM006", new DateTime(2021, 5, 5) ,1000000, dsNhanVien[2].maNhanVien, dsKhachHang[4].maKhachHang, dsHinhThucThanhToan[2].maHinhThucThanhToan, dsNhanVien[2], dsKhachHang[4], dsHinhThucThanhToan[2], new List<ChiTietHoaDonMuaHang>()));

            dsHoaDonMuaHang.Add(new HoaDonMuaHang("HDM007", new DateTime(2021, 3, 18),1200000, dsNhanVien[2].maNhanVien, dsKhachHang[5].maKhachHang, dsHinhThucThanhToan[1].maHinhThucThanhToan, dsNhanVien[2], dsKhachHang[5], dsHinhThucThanhToan[1], new List<ChiTietHoaDonMuaHang>()));
            dsHoaDonMuaHang.Add(new HoaDonMuaHang("HDM008", new DateTime(2021, 6, 9) ,3500000, dsNhanVien[3].maNhanVien, dsKhachHang[5].maKhachHang, dsHinhThucThanhToan[1].maHinhThucThanhToan, dsNhanVien[3], dsKhachHang[5], dsHinhThucThanhToan[1], new List<ChiTietHoaDonMuaHang>()));

            dsHoaDonMuaHang.Add(new HoaDonMuaHang("HDM009", new DateTime(2021, 4, 21),3500000, dsNhanVien[3].maNhanVien, dsKhachHang[6].maKhachHang, dsHinhThucThanhToan[0].maHinhThucThanhToan, dsNhanVien[3], dsKhachHang[6], dsHinhThucThanhToan[0], new List<ChiTietHoaDonMuaHang>()));
            dsHoaDonMuaHang.Add(new HoaDonMuaHang("HDM010", new DateTime(2021, 5, 12),2100000, dsNhanVien[3].maNhanVien, dsKhachHang[6].maKhachHang, dsHinhThucThanhToan[1].maHinhThucThanhToan, dsNhanVien[3], dsKhachHang[6], dsHinhThucThanhToan[1], new List<ChiTietHoaDonMuaHang>()));
            dsHoaDonMuaHang.Add(new HoaDonMuaHang("HDM011", new DateTime(2021, 6, 6) ,600000, dsNhanVien[4].maNhanVien, dsKhachHang[6].maKhachHang, dsHinhThucThanhToan[2].maHinhThucThanhToan, dsNhanVien[4], dsKhachHang[6], dsHinhThucThanhToan[2], new List<ChiTietHoaDonMuaHang>()));
        }
        public static void taoDSChiTietHDMuaHang()
        {
            dsChiTietHDMuaHang.Add(new ChiTietHoaDonMuaHang(dsHoaDonMuaHang[0].maHoaDonMuaHang, dsSanPham[0].maSanPham, 5 , 600000 , dsHoaDonMuaHang[0], dsSanPham[0])); // 120

            dsChiTietHDMuaHang.Add(new ChiTietHoaDonMuaHang(dsHoaDonMuaHang[1].maHoaDonMuaHang, dsSanPham[1].maSanPham, 5 , 600000 , dsHoaDonMuaHang[1], dsSanPham[1])); // 120

            dsChiTietHDMuaHang.Add(new ChiTietHoaDonMuaHang(dsHoaDonMuaHang[2].maHoaDonMuaHang, dsSanPham[5].maSanPham, 5 , 1100000, dsHoaDonMuaHang[2], dsSanPham[5])); // 220
            dsChiTietHDMuaHang.Add(new ChiTietHoaDonMuaHang(dsHoaDonMuaHang[2].maHoaDonMuaHang, dsSanPham[3].maSanPham, 10, 1500000, dsHoaDonMuaHang[2], dsSanPham[3])); // 150
            
            dsChiTietHDMuaHang.Add(new ChiTietHoaDonMuaHang(dsHoaDonMuaHang[3].maHoaDonMuaHang, dsSanPham[4].maSanPham, 10, 3500000, dsHoaDonMuaHang[3], dsSanPham[4])); // 350
            dsChiTietHDMuaHang.Add(new ChiTietHoaDonMuaHang(dsHoaDonMuaHang[4].maHoaDonMuaHang, dsSanPham[2].maSanPham, 5 , 3500000, dsHoaDonMuaHang[4], dsSanPham[2])); // 700

            dsChiTietHDMuaHang.Add(new ChiTietHoaDonMuaHang(dsHoaDonMuaHang[5].maHoaDonMuaHang, dsSanPham[6].maSanPham, 5 , 1000000, dsHoaDonMuaHang[5], dsSanPham[6])); // 200

            dsChiTietHDMuaHang.Add(new ChiTietHoaDonMuaHang(dsHoaDonMuaHang[6].maHoaDonMuaHang, dsSanPham[1].maSanPham, 15, 1800000, dsHoaDonMuaHang[6], dsSanPham[1])); // 120
            dsChiTietHDMuaHang.Add(new ChiTietHoaDonMuaHang(dsHoaDonMuaHang[7].maHoaDonMuaHang, dsSanPham[4].maSanPham, 10, 3500000, dsHoaDonMuaHang[7], dsSanPham[4])); // 350

            dsChiTietHDMuaHang.Add(new ChiTietHoaDonMuaHang(dsHoaDonMuaHang[8].maHoaDonMuaHang, dsSanPham[4].maSanPham, 10, 3500000, dsHoaDonMuaHang[8], dsSanPham[4])); // 350
            dsChiTietHDMuaHang.Add(new ChiTietHoaDonMuaHang(dsHoaDonMuaHang[9].maHoaDonMuaHang, dsSanPham[5].maSanPham, 5 , 1100000, dsHoaDonMuaHang[9], dsSanPham[5])); // 220
            dsChiTietHDMuaHang.Add(new ChiTietHoaDonMuaHang(dsHoaDonMuaHang[9].maHoaDonMuaHang, dsSanPham[6].maSanPham, 5 , 1000000, dsHoaDonMuaHang[9], dsSanPham[6])); // 200
            dsChiTietHDMuaHang.Add(new ChiTietHoaDonMuaHang(dsHoaDonMuaHang[10].maHoaDonMuaHang, dsSanPham[0].maSanPham, 5 , 600000 , dsHoaDonMuaHang[10], dsSanPham[0])); // 120

            // SP   0 có 20 sp, còn 10 sp  
            //      1 có 15 sp, còn 5 sp
            //      2 có 10 sp, còn 5 sp 
            //      3 có 10 sp, còn 0 sp -> hết hàng 
            //      4 có 35 sp, còn 5 sp
            //      5 có 10 sp, còn 0 sp -> hết hàng
            //      6 có 20 sp, còn 10 sp 
        }

        // Cập nhật
        public static void capNhatDSHoaDon_KhachHang()
        {
            dsKhachHang[0].dsHoaDon_KhachHang.Add(dsHoaDonMuaHang[0]);
            dsKhachHang[1].dsHoaDon_KhachHang.Add(dsHoaDonMuaHang[1]);
            dsKhachHang[2].dsHoaDon_KhachHang.Add(dsHoaDonMuaHang[2]);
            dsKhachHang[3].dsHoaDon_KhachHang.Add(dsHoaDonMuaHang[3]);
            dsKhachHang[3].dsHoaDon_KhachHang.Add(dsHoaDonMuaHang[4]);
            dsKhachHang[4].dsHoaDon_KhachHang.Add(dsHoaDonMuaHang[5]);
            dsKhachHang[5].dsHoaDon_KhachHang.Add(dsHoaDonMuaHang[6]);
            dsKhachHang[5].dsHoaDon_KhachHang.Add(dsHoaDonMuaHang[7]);
            dsKhachHang[6].dsHoaDon_KhachHang.Add(dsHoaDonMuaHang[8]);
            dsKhachHang[6].dsHoaDon_KhachHang.Add(dsHoaDonMuaHang[9]);
            dsKhachHang[6].dsHoaDon_KhachHang.Add(dsHoaDonMuaHang[10]);
        }
        public static void capNhapDSChiTiet_HoaDonNhap()
        {
            dsHoaDonNhapHang[0].dsChiTiet_HoaDonNhap.Add(dsChiTietHDNhapHang[0]);
            dsHoaDonNhapHang[0].dsChiTiet_HoaDonNhap.Add(dsChiTietHDNhapHang[1]);
            dsHoaDonNhapHang[1].dsChiTiet_HoaDonNhap.Add(dsChiTietHDNhapHang[2]);
            dsHoaDonNhapHang[1].dsChiTiet_HoaDonNhap.Add(dsChiTietHDNhapHang[3]);
            dsHoaDonNhapHang[2].dsChiTiet_HoaDonNhap.Add(dsChiTietHDNhapHang[4]);
            dsHoaDonNhapHang[2].dsChiTiet_HoaDonNhap.Add(dsChiTietHDNhapHang[5]);
            dsHoaDonNhapHang[3].dsChiTiet_HoaDonNhap.Add(dsChiTietHDNhapHang[6]);
            dsHoaDonNhapHang[4].dsChiTiet_HoaDonNhap.Add(dsChiTietHDNhapHang[7]);
            dsHoaDonNhapHang[5].dsChiTiet_HoaDonNhap.Add(dsChiTietHDNhapHang[8]);
        }
        public static void capNhatDSChiTiet_HoaDonMua()
        {
            dsHoaDonMuaHang[0].dsChiTiet_HoaDonMua.Add(dsChiTietHDMuaHang[0]);
            dsHoaDonMuaHang[1].dsChiTiet_HoaDonMua.Add(dsChiTietHDMuaHang[1]);
            dsHoaDonMuaHang[2].dsChiTiet_HoaDonMua.Add(dsChiTietHDMuaHang[2]);
            dsHoaDonMuaHang[2].dsChiTiet_HoaDonMua.Add(dsChiTietHDMuaHang[3]);
            dsHoaDonMuaHang[3].dsChiTiet_HoaDonMua.Add(dsChiTietHDMuaHang[4]);
            dsHoaDonMuaHang[4].dsChiTiet_HoaDonMua.Add(dsChiTietHDMuaHang[5]);
            dsHoaDonMuaHang[5].dsChiTiet_HoaDonMua.Add(dsChiTietHDMuaHang[6]);
            dsHoaDonMuaHang[6].dsChiTiet_HoaDonMua.Add(dsChiTietHDMuaHang[7]);
            dsHoaDonMuaHang[7].dsChiTiet_HoaDonMua.Add(dsChiTietHDMuaHang[8]);
            dsHoaDonMuaHang[8].dsChiTiet_HoaDonMua.Add(dsChiTietHDMuaHang[9]);
            dsHoaDonMuaHang[9].dsChiTiet_HoaDonMua.Add(dsChiTietHDMuaHang[10]);
            dsHoaDonMuaHang[9].dsChiTiet_HoaDonMua.Add(dsChiTietHDMuaHang[11]);
            dsHoaDonMuaHang[10].dsChiTiet_HoaDonMua.Add(dsChiTietHDMuaHang[12]);
        }
        public static void capNhatDSChiTiet_SanPham()
        {
            // Sản phẩm nhập
            dsSanPham[0].dsChiTietNhap_SanPham.Add(dsChiTietHDNhapHang[0]);
            dsSanPham[3].dsChiTietNhap_SanPham.Add(dsChiTietHDNhapHang[1]);
            dsSanPham[1].dsChiTietNhap_SanPham.Add(dsChiTietHDNhapHang[2]);
            dsSanPham[4].dsChiTietNhap_SanPham.Add(dsChiTietHDNhapHang[3]);
            dsSanPham[2].dsChiTietNhap_SanPham.Add(dsChiTietHDNhapHang[4]);
            dsSanPham[5].dsChiTietNhap_SanPham.Add(dsChiTietHDNhapHang[5]);
            dsSanPham[6].dsChiTietNhap_SanPham.Add(dsChiTietHDNhapHang[6]);
            dsSanPham[1].dsChiTietNhap_SanPham.Add(dsChiTietHDNhapHang[7]);
            dsSanPham[4].dsChiTietNhap_SanPham.Add(dsChiTietHDNhapHang[8]);

            // Sản phẩm mua
            dsSanPham[0].dsChiTietMua_SanPham.Add(dsChiTietHDMuaHang[0]);
            dsSanPham[1].dsChiTietMua_SanPham.Add(dsChiTietHDMuaHang[1]);
            dsSanPham[5].dsChiTietMua_SanPham.Add(dsChiTietHDMuaHang[2]);
            dsSanPham[3].dsChiTietMua_SanPham.Add(dsChiTietHDMuaHang[3]);
            dsSanPham[4].dsChiTietMua_SanPham.Add(dsChiTietHDMuaHang[4]);
            dsSanPham[2].dsChiTietMua_SanPham.Add(dsChiTietHDMuaHang[5]);
            dsSanPham[6].dsChiTietMua_SanPham.Add(dsChiTietHDMuaHang[6]);
            dsSanPham[1].dsChiTietMua_SanPham.Add(dsChiTietHDMuaHang[7]);
            dsSanPham[4].dsChiTietMua_SanPham.Add(dsChiTietHDMuaHang[8]);
            dsSanPham[4].dsChiTietMua_SanPham.Add(dsChiTietHDMuaHang[9]);
            dsSanPham[5].dsChiTietMua_SanPham.Add(dsChiTietHDMuaHang[10]);
            dsSanPham[6].dsChiTietMua_SanPham.Add(dsChiTietHDMuaHang[11]);
            dsSanPham[0].dsChiTietMua_SanPham.Add(dsChiTietHDMuaHang[12]);
        }
      
        // Lê Anh Nhân	20110689
        public static void Linq01(string loaiKhachHang)
        {
            // Cho biết tên, địa chỉ và số điện thoại của các khách hàng theo loại cho trước. 
            var dsKH = from kh in dsKhachHang
                       where kh.loaiKhachHang.tenLoaiKhachHang == loaiKhachHang
                       select kh;

            Console.WriteLine("=================== Danh sách khách hàng loại {0} ===================", loaiKhachHang);
            Console.WriteLine("          Tên khách hàng      |      Địa chỉ          |       SĐT");
            foreach (var kh in dsKH) 
            {
                Console.WriteLine("\t  {0}    |    {1}    |    {2}", kh.tenKhachHang, kh.diaChi, kh.SDT);
            }            
        }
        public static void Linq02()
        {
            // Liệt kê tên và địa chỉ các nơi cung cấp sản phẩm có thời gian bảo hành dưới 8 tháng.
            var dsNCC = (from hd in dsChiTietHDNhapHang
                         where hd.sanPham.phieuBaoHanh.thoiGianBaoHanh < 8
                         select new 
                         { 
                             tenNCC = hd.hoaDonNhapHang.noiCungCap.tenNoiCungCap,
                             diaChiNCC = hd.hoaDonNhapHang.noiCungCap.diaChi 
                         }).Distinct();

            Console.WriteLine("============= Danh sách nơi cung cấp sản phẩm có thời gian bảo hành dưới 8 tháng =============");
            foreach (var ncc in dsNCC)
            {
                Console.WriteLine("\t\t   {0}    |   {1}", ncc.tenNCC, ncc.diaChiNCC);
            }
            Console.WriteLine("------------------------------------------------------------------------------------");
        }
        public static void Linq03()
        {
            // Cho biết số lượng sản phẩm đã mua của mỗi khách hàng trong mỗi hóa đơn.   
            var dsSoLuongSP = from hd in dsChiTietHDMuaHang
                              group hd by new
                              {
                                  hd.hoaDonMuaHang.khachHang.tenKhachHang,
                                  hd.hoaDonMuaHang.maHoaDonMuaHang
                              } into gr
                              select new
                              {
                                  tenKH = gr.Key.tenKhachHang,
                                  maHD = gr.Key.maHoaDonMuaHang,
                                  soLuongSP = gr.Sum(n => n.soLuong)
                              };
            var dsSoLuongSP_KH = dsSoLuongSP.GroupBy(kh => kh.tenKH);
         
            foreach (var kh in dsSoLuongSP_KH)
            {
                Console.WriteLine("         Khách hàng {0}", kh.Key);
                Console.WriteLine("     Mã hóa đơn  |     Số lượng");
                foreach (var hd in kh)
                {
                    Console.WriteLine("     {0}      |     {1}", hd.maHD, hd.soLuongSP);
                }
                Console.WriteLine();
            }
        }       
        public static void Linq04()
        {
            // Cho biết tổng số tiền các sản phẩm bán được trong mỗi tháng.
            var dsSoTien_Thang = from hd in dsChiTietHDMuaHang
                                 group hd by hd.hoaDonMuaHang.ngayMua.Month into gr
                                 select new
                                 {
                                      thangmua = gr.Key,
                                      tongSoTien = gr.Sum(n => n.donGia)
                                 };

            Console.WriteLine("============= Danh sách tổng số tiền bán theo tháng =============");
            Console.WriteLine("\t\tTháng    |    Tổng số tiền "); 
            foreach (var hd in dsSoTien_Thang)
            {
                
                Console.WriteLine("\t\t  {0}      |      {1}", hd.thangmua, hd.tongSoTien);
            }
        }
        public static void Linq05()
        {
            //  Cho biết mã và tên các sản phẩm hết hàng. 
            // 1: Tình tổng số lượng sản phẩm đã nhập theo từng sản phẩm.
            // 2: Tình tổng số lượng sản phẩm đã mua theo từng sản phẩm.
            // 3: Kiểm tra nếu số lượng nhập bằng số lượng mua (số lượng nhập - số lượng mua == 0) => sản phẩm hết hàng.
            var dsSPNhap = from hd in dsChiTietHDNhapHang
                           group hd by new { hd.sanPham.tenSanPham, hd.maSanPham } into gr
                           select new
                           {
                               maSP = gr.Key.maSanPham,
                               tenSP = gr.Key.tenSanPham,
                               soLuongNhap = gr.Sum(n => n.soLuong)
                           };
            var dsSPMua = from hd in dsChiTietHDMuaHang
                          group hd by new { hd.sanPham.tenSanPham, hd.maSanPham } into gr
                          select new
                          {
                              maSP = gr.Key.maSanPham,
                              tenSP = gr.Key.tenSanPham,
                              soLuongMua = gr.Sum(n => n.soLuong)
                          };
            var dsSPHetHang = (from spNhap in dsSPNhap
                               join spMua in dsSPMua on spNhap.maSP equals spMua.maSP
                               where spNhap.soLuongNhap == spMua.soLuongMua
                               orderby spNhap.maSP
                               select new
                               {
                                   masp = spNhap.maSP,
                                   tensp = spNhap.tenSP
                               }).Distinct();

            //foreach (var sp in dsSPNhap)
            //{
            //    Console.WriteLine("{0} - {1} - {2}", sp.tenSP, sp.maSP, sp.soLuongNhap);
            //}
            //Console.WriteLine("==========================");
            //foreach (var sp in dsSPMua)
            //{
            //    Console.WriteLine("{0} - {1} - {2}", sp.tenSP, sp.maSP, sp.soLuongMua);
            //}

            Console.WriteLine("================= Danh sách sản phẩm hết hàng =================");
            Console.WriteLine("\t           Mã SP      |      Tên SP ");
            foreach (var sp in dsSPHetHang)
            {
                Console.WriteLine("\t           {0}      |      {1}", sp.masp, sp.tensp);
            }
        }
        public static void Linq06()
        {
            // Cho biết loại khách hàng được nhiều nhân viên tư vấn nhất.
            // 1: Đếm số lượng nhân viên tư vấn theo từng loại khách hàng.
            // 2: Lọc ra loại khách hàng có nhiều nhân viên tư vấn nhất.
            var dsLoaiKH_Nhom = from hd in dsHoaDonMuaHang
                                group hd by new
                                {
                                    hd.khachHang.loaiKhachHang.tenLoaiKhachHang,
                                    hd.nhanVien.tenNhanVien
                                } into gr
                                select new
                                {
                                    tenLoaiKH = gr.Key.tenLoaiKhachHang,
                                    tenNV = gr.Key.tenNhanVien,
                                    soLanNV = gr.Count()
                                };
            var dsSL_NhanVien = from lkh in dsLoaiKH_Nhom
                                group lkh by lkh.tenLoaiKH into gr
                                select new
                                {
                                    tenLoaiKH = gr.Key,
                                    soLuongNV = gr.Count()
                                };
            var loaiKH_NhieuNVNhat = from kh in dsSL_NhanVien
                                     where kh.soLuongNV == dsSL_NhanVien.Max(n => n.soLuongNV)
                                     select kh.tenLoaiKH;

            foreach (var kh in dsLoaiKH_Nhom)
            {
                Console.WriteLine("{0} - {1} - {2}", kh.tenLoaiKH, kh.tenNV, kh.soLanNV);
            }
            Console.WriteLine("----------------------------------------------------------------");

            foreach (var kh in dsSL_NhanVien)
            {
                Console.WriteLine("{0} - {1}", kh.tenLoaiKH, kh.soLuongNV);
            }
            Console.WriteLine("----------------------------------------------------------------");

            Console.WriteLine("============= Loại khách hàng được nhiều nhân viên tư vấn nhất =============");
            foreach(var lkh in loaiKH_NhieuNVNhat)
            {
                Console.WriteLine("         Loại khách hàng: {0}", lkh);
            }

        }
        public static void Linq07()
        {
            // Cho biết thương hiệu có sản phẩm bán chạy nhất.
            // 1: Tính tổng số lượng sản phẩm đã bán của mỗi thương hiệu.
            // 2: Lọc ra thương hiệu có số lượng sản phẩm đã bán nhiều nhất (có sản phẩm bán chạy nhất) .
            var dsSLBan_TH = from hd in dsChiTietHDMuaHang
                             group hd by hd.sanPham.thuongHieu.tenThuongHieu into gr
                             select new
                             {
                                 tenthuonghieu = gr.Key,
                                 soLuongSP = gr.Sum(n => n.soLuong)
                             };
            var dsThuongHieu_SLMax = from thuonghieu in dsSLBan_TH
                                     where thuonghieu.soLuongSP == dsSLBan_TH.Max(n => n.soLuongSP)
                                     select thuonghieu;

            foreach (var th in dsSLBan_TH)
            {
                Console.WriteLine("{0} - {1}", th.tenthuonghieu, th.soLuongSP);
            }
            Console.WriteLine("----------------------------------------------------------------");

            Console.WriteLine("============= Thương hiệu có sản phẩm bán chạy nhất =============");
            foreach (var th in dsThuongHieu_SLMax)
            {
                Console.WriteLine("         Thương hiệu: {0}", th.tenthuonghieu);
            }
        }
        public static void Linq08()
        {
            // Cho biết nhân viên tư vấn nhiều hóa đơn mua có đơn giá lớn nhất. 
            // 1: Lọc ra các hóa đơn có đơn giá lớn nhất và đồng thời đếm số hóa đơn có đơn giá lớn nhất của mỗi nhân viên.
            // 2: Lọc ra nhân viên có nhiều hóa đơn có đơn giá lớn nhất.
            
            var dsDonGiaMax = from hd in dsHoaDonMuaHang
                              where hd.donGia == dsHoaDonMuaHang.Max(n => n.donGia)
                              group hd by hd.nhanVien.tenNhanVien into gr
                              select new
                              {
                                  tenNV = gr.Key,
                                  soLuongHD = gr.Count()
                              };

            var NhanVien_NhieuDonGiaNhat = from hd in dsDonGiaMax
                                           where hd.soLuongHD == dsDonGiaMax.Max(n => n.soLuongHD)
                                           select hd.tenNV;
           
            foreach (var hd in dsDonGiaMax)
            {
                Console.WriteLine("{0} - {1} ", hd.tenNV, hd.soLuongHD);
            }

            Console.WriteLine("============= Nhân viên tư vấn nhiều hóa đơn có đơn giá lớn nhất =============");
            foreach (var nv in NhanVien_NhieuDonGiaNhat)
            {
                Console.WriteLine("         Nhân viên: {0}", nv);
            }           
        }
        public static void Linq09()
        {
            // Cho biết khách hàng đã thanh toán nhiều hình thức có đơn giá lớn nhất.
            // 1: Lọc ra các hóa đơn có đơn giá lớn nhất.  
            // 2: Đếm số lượng hình thức thanh toán của mỗi khách hàng có đơn giá lớn nhất.
            // 3: Lọc ra khách hàng có nhiều hình thức thanh toán có đơn giá lớn nhất.          

            var dsDonGiaMax = from hd in dsHoaDonMuaHang
                              where hd.donGia == dsHoaDonMuaHang.Max(n => n.donGia)
                              group hd by new
                              {
                                  hd.khachHang.tenKhachHang,
                                  hd.hinhThucThanhToan.tenHinhThucThanhToan
                              } into gr
                              select new
                              {
                                  tenKH = gr.Key.tenKhachHang,
                                  hinhThuc = gr.Key.tenHinhThucThanhToan,
                                  soLanHinhThuc = gr.Count()
                              };

            var dsSLHinhThuc_KH = from kh in dsDonGiaMax
                                  group kh by kh.tenKH into gr
                                  select new
                                  {
                                      tenKH = gr.Key,
                                      soLuongHinhThuc = gr.Count()
                                  };
            var KhachHangNhieuHinhThucNhat = from kh in dsSLHinhThuc_KH
                                             where kh.soLuongHinhThuc == dsSLHinhThuc_KH.Max(n => n.soLuongHinhThuc)
                                             select kh.tenKH;

            foreach (var kh in dsDonGiaMax)
            {
                Console.WriteLine("{0} - {1} - {2} ", kh.tenKH, kh.hinhThuc, kh.soLanHinhThuc);
            }
            Console.WriteLine("----------------------------------------------------------------");
          
            foreach (var kh in dsSLHinhThuc_KH)
            {
                Console.WriteLine("{0} - {1}  ", kh.tenKH, kh.soLuongHinhThuc);
            }
            Console.WriteLine("----------------------------------------------------------------");

            Console.WriteLine("============= Khách hàng đã thanh toán nhiều hình thức có đơn giá lớn nhất =============");
            foreach (var kh in KhachHangNhieuHinhThucNhat)
            {
                Console.WriteLine("         Khách hàng: {0}", kh);
            }
        }
        public static void Linq10()
        {
            // Cho biết loại khách hàng đã thanh toán ít hình thức có đơn giá nhỏ nhất
            // 1: Lọc ra các hóa đơn có đơn giá nhỏ nhất.  
            // 2: Đếm số lượng hình thức thanh toán của mỗi loại khách hàng có đơn giá nhỏ nhất.
            // 3: Lọc ra loại khách hàng có ít hình thức thanh toán có đơn giá nhỏ nhất.

            var dsDonGiaMax = from hd in dsHoaDonMuaHang
                              where hd.donGia == dsHoaDonMuaHang.Min(n => n.donGia)
                              group hd by new
                              {
                                  hd.khachHang.loaiKhachHang.tenLoaiKhachHang,
                                  hd.hinhThucThanhToan.tenHinhThucThanhToan
                              } into gr
                              select new
                              {
                                  tenloaiKH = gr.Key.tenLoaiKhachHang,
                                  hinhthuc = gr.Key.tenHinhThucThanhToan,
                                  soLanHinhThuc = gr.Count()
                              };

            var dsSLHinhThuc_LoaiKH = from kh in dsDonGiaMax
                                      group kh by kh.tenloaiKH into gr
                                      select new
                                      {
                                          tenloaiKH = gr.Key,
                                          soLuongHinhThuc = gr.Count()
                                      };         
            var LoaiKhachHangItHinhThucNhat = from kh in dsSLHinhThuc_LoaiKH
                                              where kh.soLuongHinhThuc == dsSLHinhThuc_LoaiKH.Min(n => n.soLuongHinhThuc)
                                              select kh.tenloaiKH;

            foreach (var kh in dsDonGiaMax)
            {
                Console.WriteLine("{0} - {1} - {2} ", kh.tenloaiKH, kh.hinhthuc, kh.soLanHinhThuc);
            }
            
            Console.WriteLine("----------------------------------------------------------------");
            foreach (var kh in dsSLHinhThuc_LoaiKH)
            {
                Console.WriteLine("{0} - {1}  ", kh.tenloaiKH, kh.soLuongHinhThuc);
            }
            Console.WriteLine("----------------------------------------------------------------");

            Console.WriteLine("============= Loại khách hàng đã thanh toán ít hình thức có đơn giá nhỏ nhất =============");
            foreach (var kh in LoaiKhachHangItHinhThucNhat)
            {
                Console.WriteLine("         Loại khách hàng: {0}", kh);
            }
        }

        // Lê Hải Đăng	20110243
        public static void Linq11()
        {
            var kq = dsNhanVien.GroupBy(p => p.loaiNhanVien.tenLoaiNhanVien);
            foreach (var group in kq)
            {
                Console.WriteLine("=================================Loại nhân viên {0}=================================", group.Key);
                Console.Write(String.Format("{0,-32}", $"\tMÃ NHÂN VIÊN"));
                Console.Write(String.Format("{0,-30}", $"TÊN NHÂN VIÊN"));
                Console.WriteLine(String.Format("{0,-40}", $"NĂM BẮT ĐẦU LÀM"));
                foreach (var item in group)
                {
                    Console.Write(String.Format("{0,-29}", $"\t   {item.maNhanVien}"));
                    Console.Write(String.Format("{0,-30}", $"{item.tenNhanVien}"));
                    Console.WriteLine(String.Format("{0,-40}", $"\t   {item.namBatDauLam}"));
                }
                Console.WriteLine();
            }
        }
        public static void Linq12(string maNhanVien)
        {
            Console.WriteLine("=========================================================Thông tin nhân viên có mã {0}=========================================================", maNhanVien);
            var kq = dsNhanVien.FirstOrDefault(p => p.maNhanVien == maNhanVien);
            Console.Write(String.Format("{0,-32}", $"\tTÊN LOẠI NHÂN VIÊN"));
            Console.Write(String.Format("{0,-30}", $"MÃ NHÂN VIÊN"));
            Console.Write(String.Format("{0,-30}", $"TÊN NHÂN VIÊN"));
            Console.Write(String.Format("{0,-30}", $"NGÀY SINH"));
            Console.WriteLine(String.Format("{0,-30}", $"NĂM BẮT ĐẦU LÀM"));

            Console.Write(String.Format("{0,-32}", $"\t    {kq.loaiNhanVien.tenLoaiNhanVien}"));
            Console.Write(String.Format("{0,-30}", $"   {kq.maNhanVien}"));
            Console.Write(String.Format("{0,-25}", $"{kq.tenNhanVien}"));
            Console.Write(String.Format("{0,-30}", $"{kq.ngaySinh}"));
            Console.WriteLine(String.Format("{0,-30}", $"     {kq.namBatDauLam}"));
            Console.WriteLine();

        }
        public static void Linq13()
        {
            var nhanVien = from p in dsNhanVien
                           where p.namBatDauLam < 2016
                           select p;
            var kq = (from hoadon in dsHoaDonMuaHang
                      join nv in nhanVien on hoadon.maNhanVien equals nv.maNhanVien
                      select new { MAHANG = hoadon.maHoaDonMuaHang, MANV = hoadon.maNhanVien, NGAY = hoadon.nhanVien.namBatDauLam, TEN = hoadon.nhanVien.tenNhanVien });
            Console.WriteLine("====================================Các hóa đơn được nhân viên có kinh nghiệm làm việc trên 5 năm tư vấn===================================");
            Console.Write(String.Format("{0,-32}", $"\tMÃ HÓA ĐƠN MUA HÀNG"));
            Console.Write(String.Format("{0,-30}", $"MÃ NHÂN VIÊN"));
            Console.Write(String.Format("{0,-30}", $"NĂM BẮT ĐẦU LÀM"));
            Console.WriteLine(String.Format("{0,-30}", $"TÊN NHÂN VIÊN"));


            foreach (var item in kq)
            {
                Console.Write(String.Format("{0,-32}", $"\t    {item.MAHANG}"));
                Console.Write(String.Format("{0,-30}", $"   {item.MANV}"));
                Console.Write(String.Format("{0,-30}", $"     {item.NGAY}"));
                Console.WriteLine(String.Format("{0,-30}", $" {item.TEN}"));
            }
            Console.WriteLine();

        }
        public static void Linq14()
        {
            var gia = dsChiTietHDMuaHang.Max(p => p.donGia);
            var dsHD = from p in dsChiTietHDMuaHang
                       where p.donGia == gia
                       select p;
            var kq =  from hd in dsHoaDonMuaHang
                      join hd_ct in dsHD on hd.maHoaDonMuaHang equals hd_ct.maHoaDonMuaHang
                      select new { MAKH = hd.khachHang.maKhachHang, TENKH = hd.khachHang.tenKhachHang, MAHD = hd.maHoaDonMuaHang, TIEN = hd_ct.donGia };
            Console.WriteLine("=======================================Khách hàng mua hàng nhiều tiền nhất=======================================");
            Console.Write(String.Format("{0,-32}", $"\tMÃ KHÁCH HÀNG"));
            Console.Write(String.Format("{0,-30}", $"TÊN KHÁCH HÀNG"));
            Console.Write(String.Format("{0,-30}", $"MÃ HÓA ĐƠN MUA HÀNG"));
            Console.WriteLine(String.Format("{0,-30}", $"SỐ TIỀN"));
            foreach (var item in kq)
            {
                Console.Write(String.Format("{0,-32}", $"\t    {item.MAKH}"));
                Console.Write(String.Format("{0,-30}", $"{item.TENKH}"));
                Console.Write(String.Format("{0,-30}", $"     {item.MAHD}"));
                Console.WriteLine(String.Format("{0,-30}", $" {item.TIEN}"));
            }
            Console.WriteLine();

        }       
        public static void Linq15()
        {
            var gia = dsChiTietHDMuaHang.Min(p => p.donGia);
            var dsHD = from p in dsChiTietHDMuaHang
                       where p.donGia == gia
                       select p;
            var kq = (from hd in dsHoaDonMuaHang
                      join hd_ct in dsHD on hd.maHoaDonMuaHang equals hd_ct.maHoaDonMuaHang
                      select new { MAKH = hd.khachHang.maKhachHang, TENKH = hd.khachHang.tenKhachHang, MAHD = hd.maHoaDonMuaHang, TIEN = hd_ct.donGia });
            Console.WriteLine("=======================================Khách hàng mua hàng ít tiền nhất=======================================");
            Console.Write(String.Format("{0,-32}", $"\tMÃ KHÁCH HÀNG"));
            Console.Write(String.Format("{0,-30}", $"TÊN KHÁCH HÀNG"));
            Console.Write(String.Format("{0,-30}", $"MÃ HÓA ĐƠN MUA HÀNG"));
            Console.WriteLine(String.Format("{0,-30}", $"SỐ TIỀN"));
            foreach (var item in kq)
            {
                Console.Write(String.Format("{0,-32}", $"\t    {item.MAKH}"));
                Console.Write(String.Format("{0,-30}", $"{item.TENKH}"));
                Console.Write(String.Format("{0,-30}", $"     {item.MAHD}"));
                Console.WriteLine(String.Format("{0,-30}", $" {item.TIEN}"));
            }
            Console.WriteLine();

        }
        public static void Linq16()
        {
            var kq = dsChiTietHDMuaHang.Select(p => p);
            Console.WriteLine("==========================================Trung bình số tiền/Hóa đơn==========================================");
            Console.Write(String.Format("{0,-32}", $"\tMÃ HÓA ĐƠN"));
            Console.Write(String.Format("{0,-30}", $"MÃ SẢN PHẨM"));
            Console.Write(String.Format("{0,-30}", $"SỐ LƯỢNG"));
            Console.WriteLine(String.Format("{0,-30}", $"SỐ TIỀN"));
            foreach (var item in kq)
            {
                Console.Write(String.Format("{0,-32}", $"\t {item.maHoaDonMuaHang}"));
                Console.Write(String.Format("{0,-30}", $"   {item.maSanPham}"));
                Console.Write(String.Format("{0,-30}", $"  {item.soLuong}"));
                Console.WriteLine(String.Format("{0,-30}", $"{item.donGia}"));
            }
            Console.WriteLine(String.Format("{0,-50}", $"\t\t\t\t\t\t\t\t\t\t\tTrung bình: {kq.Average(n => n.donGia)}"));
            Console.WriteLine();

        }
        public static void Linq17()
        {
            var dsNhap = from sp in dsSanPham
                         join HDNhap in dsChiTietHDNhapHang on sp.maSanPham equals HDNhap.maSanPham into gr
                         select new
                         {
                             maSanPham = sp.maSanPham,
                             tenSanPham = sp.tenSanPham,
                             tongTienNhap = gr.Sum(n => n.donGia),
                             tongSoLuongNhap = gr.Sum(n => n.soLuong)
                         };
            /*foreach (var item in dsNhap)
            {
                Console.Write(String.Format("{0,-32}", $"\t  {item.maSanPham}"));
                Console.Write(String.Format("{0,-30}", $"  {item.tenSanPham}"));
                Console.Write(String.Format("{0,-30}", $" {item.tongTienNhap}"));
                Console.WriteLine(String.Format("{0,-30}", $" {item.tongSoLuongNhap}"));
            }*/
            var dsBan = from sp in dsSanPham
                        join HDBan in dsChiTietHDMuaHang on sp.maSanPham equals HDBan.maSanPham into gr
                        select new
                        {
                            maSanPham = sp.maSanPham,
                            tenSanPham = sp.tenSanPham,
                            tongTienBan = gr.Sum(n => n.donGia),
                            tongSoLuongBan = gr.Sum(n => n.soLuong)
                        };
            /*foreach (var item in dsBan)
            {
                Console.Write(String.Format("{0,-32}", $"\t  {item.maSanPham}"));
                Console.Write(String.Format("{0,-30}", $"  {item.tenSanPham}"));
                Console.Write(String.Format("{0,-30}", $" {item.tongTienBan}"));
                Console.WriteLine(String.Format("{0,-30}", $" {item.tongSoLuongBan}"));
            }*/
            var kq = from nhap in dsNhap
                     join ban in dsBan on nhap.maSanPham equals ban.maSanPham
                     select new
                     {
                         maSanPham = nhap.maSanPham,
                         tenSanPham = nhap.tenSanPham,
                         tienLoi = (ban.tongTienBan - (nhap.tongTienNhap / nhap.tongSoLuongNhap) * ban.tongSoLuongBan),
                          soLuong = ban.tongSoLuongBan
                      };

            Console.WriteLine("========================== Tiền lời theo từng sản phẩm ==========================");
            Console.Write(String.Format("{0,-32}", $"\tMÃ SẢN PHẨM"));
            Console.Write(String.Format("{0,-30}", $"TÊN SẢN PHẨM"));
            Console.Write(String.Format("{0,-30}", $"SỐ LƯỢNG BÁN"));
            Console.WriteLine(String.Format("{0,-30}", $"SỐ TIỀN LỜI"));
            foreach (var item in kq)
            {
                Console.Write(String.Format("{0,-32}", $"\t  {item.maSanPham}"));
                Console.Write(String.Format("{0,-30}", $"  {item.tenSanPham}"));
                Console.Write(String.Format("{0,-30}", $"  {item.soLuong}"));
                Console.WriteLine(String.Format("{0,-30}", $" {item.tienLoi}"));
            }
            Console.WriteLine();

        }
        public static void Linq18()
        {
            var dsTen_SL = from HDMua in dsHoaDonMuaHang
                           join HDChiTiet in dsChiTietHDMuaHang on HDMua.maHoaDonMuaHang equals HDChiTiet.maHoaDonMuaHang
                           select new
                           {
                               maSP = HDChiTiet.maSanPham,
                               tenKH = HDMua.khachHang.tenKhachHang,
                               soLuong = HDChiTiet.soLuong
                           };
            /*foreach (var item in dsTen_SL)
            {
                Console.Write(String.Format("{0,-32}", $"\t{item.tenKH}"));
                Console.Write(String.Format("{0,-32}", $"\t{item.maSP}"));
                Console.WriteLine(String.Format("{0,-30}", $"  {item.soLuong}"));
            }*/
            var dsTen_SLMax = from item in dsTen_SL
                              group item by item.tenKH into gr
                              select new
                              {
                                  tenKH = gr.Key,
                                  soLuong = gr.Max(n => n.soLuong)
                              };
            /*foreach (var item in dsTen_SLMax)
            {
                Console.Write(String.Format("{0,-32}", $"\t{item.tenKH}"));
                Console.WriteLine(String.Format("{0,-30}", $"  {item.soLuong}"));
            }*/
            var kq = from item1 in dsChiTietHDMuaHang
                      join item2 in dsTen_SLMax on
                         new { x1 = item1.hoaDonMuaHang.khachHang.tenKhachHang, x2 = item1.soLuong }
                             equals
                         new { x1 = item2.tenKH, x2 = item2.soLuong }
                      select new
                      {
                          tenKH = item2.tenKH,
                          thuongHieu = item1.sanPham.thuongHieu.tenThuongHieu
                      };

            Console.WriteLine("============= Thương hiệu khách hàng sử dụng nhiều nhất =============");
            Console.Write(String.Format("{0,-32}", $"\tTÊN KHÁCH HÀNG"));
            Console.WriteLine(String.Format("{0,-30}", $"TÊN THƯƠNG HIỆU"));
            foreach (var item in kq)
            {
                Console.Write(String.Format("{0,-32}", $"\t{item.tenKH}"));
                Console.WriteLine(String.Format("{0,-30}", $"  {item.thuongHieu}"));
            }
            Console.WriteLine();

        }
        public static void Linq19()
        {
            var dsTen_MaSP = from HDMua in dsHoaDonMuaHang
                             join HDChiTiet in dsChiTietHDMuaHang on HDMua.maHoaDonMuaHang equals HDChiTiet.maHoaDonMuaHang
                             select new
                             {
                                 tenKH = HDMua.khachHang.tenKhachHang,
                                 maSanPham = HDChiTiet.maSanPham,
                                 soLuong = HDChiTiet.soLuong
                             };
            var dsTen_SLMax = from item in dsTen_MaSP
                              group item by item.tenKH into gr
                              select new
                              {
                                  tenKH = gr.Key,
                                  soLuong = gr.Min(n => n.soLuong)
                              };
            var kq = from item1 in dsChiTietHDMuaHang
                      join item2 in dsTen_SLMax on
                         new { x1 = item1.hoaDonMuaHang.khachHang.tenKhachHang, x2 = item1.soLuong }
                             equals
                         new { x1 = item2.tenKH, x2 = item2.soLuong }
                      select new
                      {
                          tenKH = item2.tenKH,
                          thuongHieu = item1.sanPham.thuongHieu.tenThuongHieu
                      };
            Console.WriteLine("============== Thương hiệu khách hàng ít sử dụng nhất ==============");
            Console.Write(String.Format("{0,-32}", $"\tTÊN KHÁCH HÀNG"));
            Console.WriteLine(String.Format("{0,-30}", $"TÊN THƯƠNG HIỆU"));
            foreach (var item in kq)
            {
                Console.Write(String.Format("{0,-32}", $"\t{item.tenKH}"));
                Console.WriteLine(String.Format("{0,-30}", $"  {item.thuongHieu}"));
            }
            Console.WriteLine();

        }
        public static void Linq20(string maKH)
        {
            var hoadon = from hd in dsHoaDonMuaHang
                         where hd.maKhachHang == maKH
                         select new { TENKH = hd.khachHang.tenKhachHang, MAHD = hd.maHoaDonMuaHang, HTTT = hd.hinhThucThanhToan.tenHinhThucThanhToan };
            Console.WriteLine("============================= Các hình thức thanh toán của khách hàng {0} =============================", maKH);
            Console.Write(String.Format("{0,-32}", $"\tTÊN KHÁCH HÀNG"));
            Console.Write(String.Format("{0,-30}", $"MÃ HÓA ĐƠN"));
            Console.WriteLine(String.Format("{0,-30}", $"HÌNH THỨC THANH TOÁN"));
            foreach (var item in hoadon)
            {
                Console.Write(String.Format("{0,-32}", $"\t{item.TENKH}"));
                Console.Write(String.Format("{0,-30}", $"   {item.MAHD}"));
                Console.WriteLine(String.Format("{0,-30}", $"   {item.HTTT}"));
            }
            Console.WriteLine();

        }

        public static void MenuLinQ()
        {
            Console.OutputEncoding = Encoding.UTF8;

            taoDSNoiCungCap();
            taoDSThuongHieu();
            taoDSPhieuBaoHanh();
            taoDSSanPham();
            taoDSLoaiNhanVien();
            taoDSNhanVien();
            taoDSHoaDonNhapHang();
            taoDSChiTietHDNhapHang();
            taoDSLoaiKhachHang();
            taoDSKhachHang();
            taoDSHinhThucThanhToan();
            taoDSHoaDonMuaHang();          
            taoDSChiTietHDMuaHang();
            capNhatDSHoaDon_KhachHang();
            capNhapDSChiTiet_HoaDonNhap();
            capNhatDSChiTiet_HoaDonMua();
            capNhatDSChiTiet_SanPham();

            while (true)
            {
                Console.Clear();
                Console.WriteLine("================================= Chọn danh sách lệnh =================================");
                Console.WriteLine("\t1.Cho biết tên, địa chỉ và số điện thoại của các khách hàng theo loại cho trước.");
                Console.WriteLine("\t2.Liệt kê tên và địa chỉ các nơi cung cấp sản phẩm có thời gian bảo hành dưới 8 tháng.");
                Console.WriteLine("\t3.Cho biết số lượng sản phẩm đã mua của mỗi khách hàng trong mỗi hóa đơn.");
                Console.WriteLine("\t4.Cho biết tổng số tiền các sản phẩm bán được trong mỗi tháng.");
                Console.WriteLine("\t5.Cho biết mã và tên các sản phẩm hết hàng.");
                Console.WriteLine("\t6.Cho biết loại khách hàng được nhiều nhân viên tư vấn nhất.");
                Console.WriteLine("\t7.Cho biết thương hiệu có sản phẩm bán chạy nhất.");
                Console.WriteLine("\t8.Cho biết nhân viên tư vấn nhiều hóa đơn mua có đơn giá lớn nhất.");
                Console.WriteLine("\t9.Cho biết khách hàng đã thanh toán nhiều hình thức có đơn giá lớn nhất.");
                Console.WriteLine("\t10.Cho biết loại khách hàng đã thanh toán ít hình thức có đơn giá nhỏ nhất.");

                Console.WriteLine("\t11.In danh sách sinh viên theo loại nhân viên.");
                Console.WriteLine("\t12.Tìm kiếm và in ra thông tin nhân viên thông qua mã nhân viên.");
                Console.WriteLine("\t13.In ra các hóa đơn được nhân viên có kinh nghiệm làm việc trên 5 năm tư vấn.");
                Console.WriteLine("\t14.Tìm kiếm và in ra khách hàng mua hàng nhiều tiền nhất.");
                Console.WriteLine("\t15.Tìm kiếm và in ra khách hàng mua hàng ít tiền nhất.");
                Console.WriteLine("\t16.Tính trung bình số tiền/hóa đơn.");
                Console.WriteLine("\t17.Tiền lời theo từng sản phẩm.");
                Console.WriteLine("\t18.Cho biết mỗi khách hàng hay dùng thương hiệu nào nhất.");
                Console.WriteLine("\t19.Cho biết mỗi khách hàng ít dùng thương hiệu nào nhất.");
                Console.WriteLine("\t20.Cho biết các hình thức thanh toán của một khách hàng nào đó thông qua mã khách hàng.");

                Console.Write("Mời nhập lựa chọn: ");
                int choose = int.Parse(Console.ReadLine());
                bool exit = false;

                switch (choose)
                {
                    case 1:                       
                        Console.WriteLine("============= Danh sách khách hàng =============");
                        Console.WriteLine("\t1.Cơ bản");
                        Console.WriteLine("\t2.Thân Thiết");
                        Console.WriteLine("\t3.VIP");
                        Console.Write("Bạn chọn khách hàng loại: ");
                        int ch = int.Parse(Console.ReadLine());                         

                        switch (ch)
                        {
                            case 1:
                                Linq01("Cơ bản");
                                break;
                            case 2:
                                Linq01("Thân Thiết");
                                break;
                            case 3:
                                Linq01("VIP");
                                break;
                            default:
                                break;
                        }
                        break;
                    case 2:
                        Linq02();
                        break;
                    case 3:
                        Linq03();
                        break;
                    case 4:
                        Linq04();
                        break;
                    case 5:
                        Linq05();
                        break;
                    case 6:
                        Linq06();
                        break;
                    case 7:
                        Linq07();
                        break;
                    case 8:
                        Linq08();
                        break;
                    case 9:
                        Linq09();
                        break;
                    case 10:
                        Linq10();
                        break;
                    case 11:
                        Linq11();
                        break;
                    case 12:
                        Console.WriteLine("============= Danh sách mã nhân viên =============");
                        Console.WriteLine("\t1.NV001");
                        Console.WriteLine("\t2.NV002");
                        Console.WriteLine("\t3.NV003");
                        Console.WriteLine("\t4.NV004");
                        Console.WriteLine("\t5.NV005");
                        Console.Write("Bạn chọn mã nhân viên: ");
                        int ch2 = int.Parse(Console.ReadLine());

                        switch (ch2)
                        {
                            case 1:
                                Linq12("NV001");
                                break;
                            case 2:
                                Linq12("NV002");
                                break;
                            case 3:                                
                                Linq12("NV003");                                
                                break;
                            case 4:                               
                                Linq12("NV004");                               
                                break;
                            case 5:                              
                                Linq12("NV005");                               
                                break;
                            default:
                                break;
                        }
                        break;
                    case 13:                        
                        Linq13();                        
                        break;
                    case 14:                        
                        Linq14();                       
                        break;
                    case 15:                        
                        Linq15();                        
                        break;
                    case 16:                       
                        Linq16();                       
                        break;
                    case 17:                     
                        Linq17();                        
                        break;
                    case 18:                       
                        Linq18();                       
                        break;
                    case 19:                        
                        Linq19();                        
                        break;
                    case 20:
                        Console.WriteLine("============= Danh sách mã khách hàng =============");
                        Console.WriteLine("\t1.KH001");
                        Console.WriteLine("\t2.KH002");
                        Console.WriteLine("\t3.KH003");
                        Console.WriteLine("\t4.KH004");
                        Console.WriteLine("\t5.KH005");
                        Console.WriteLine("\t6.KH006");
                        Console.WriteLine("\t7.KH007");
                        Console.Write("Bạn chọn mã khách hàng: ");
                        int ch3 = int.Parse(Console.ReadLine());

                        switch (ch3)
                        {
                            case 1:                               
                                Linq20("KH001");                                
                                break;
                            case 2:                               
                                Linq20("KH002");                                
                                break;
                            case 3:                               
                                Linq20("KH003");                                
                                break;
                            case 4:
                                Linq20("KH004");                                
                                break;
                            case 5:                                
                                Linq20("KH005");                                
                                break;
                            case 6:                                
                                Linq20("KH006");                               
                                break;
                            case 7:                                
                                Linq20("KH007");                                
                                break;
                            default:
                                break;
                        }
                        break;
                    default:
                        exit = true;
                        break;
                }
                if (exit)
                    break;
                Console.WriteLine("Nhấn enter để tiếp tục thực hiện ");
                Console.ReadKey();
            }
        }
        static void Main(string[] args)
        {
            MenuLinQ();
        }
    }
}
