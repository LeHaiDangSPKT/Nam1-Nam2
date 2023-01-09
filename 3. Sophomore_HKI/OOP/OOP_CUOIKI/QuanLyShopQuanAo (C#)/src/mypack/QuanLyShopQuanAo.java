package mypack;

import java.util.ArrayList;
import java.util.Comparator;
import java.util.List;
import java.util.Map;
import java.util.Map.Entry;
import java.util.Optional;
import java.util.Scanner;
import java.util.stream.Collectors;

public class QuanLyShopQuanAo {

	public static List<KhachHang> dsKhachHang = new ArrayList<KhachHang>();
    public static List<LoaiKhachHang> dsLoaiKhachHang = new ArrayList<LoaiKhachHang>();
    public static List<NhanVien> dsNhanVien = new ArrayList<NhanVien>();
    public static List<LoaiNhanVien> dsLoaiNhanVien = new ArrayList<LoaiNhanVien>();
    public static List<HinhThucThanhToan> dsHinhThucThanhToan = new ArrayList<HinhThucThanhToan>();
    public static List<NoiCungCap> dsNoiCungCap = new ArrayList<NoiCungCap>();
    public static List<PhieuBaoHanh> dsPhieuBaoHanh = new ArrayList<PhieuBaoHanh>();
    public static List<ThuongHieu> dsThuongHieu = new ArrayList<ThuongHieu>();
    public static List<SanPham> dsSanPham = new ArrayList<SanPham>();
    public static List<HoaDonNhapHang> dsHoaDonNhapHang = new ArrayList<HoaDonNhapHang>();
    public static List<ChiTietHoaDonNhapHang> dsChiTietHDNhapHang = new ArrayList<ChiTietHoaDonNhapHang>();
    public static List<HoaDonMuaHang> dsHoaDonMuaHang = new ArrayList<HoaDonMuaHang>();
    public static List<ChiTietHoaDonMuaHang> dsChiTietHDMuaHang = new ArrayList<ChiTietHoaDonMuaHang>();
	   
    public static void taoDSNoiCungCap()
    {
        dsNoiCungCap.add(new NoiCungCap("NCC001", "Công ty Khang Thịnh", "Quận Tân Phú", "0914296114"));
        dsNoiCungCap.add(new NoiCungCap("NCC002", "Công ty Quang Minh", "Quận Gò Vấp", "0937168727"));
        dsNoiCungCap.add(new NoiCungCap("NCC003", "Công ty Thượng Tín", "Quận 1", "0969362659"));
        dsNoiCungCap.add(new NoiCungCap("NCC004", "Công ty Hoàng Phát", "Quận Tân Bình", "0905638002"));
    }    
    public static void taoDSThuongHieu()
    {
        dsThuongHieu.add(new ThuongHieu("TH001", "Calvin Klein")); // 1 sp
        dsThuongHieu.add(new ThuongHieu("TH002", "Levis       ")); // 1 sp
        dsThuongHieu.add(new ThuongHieu("TH003", "Lacoste     ")); // 2 sp
        dsThuongHieu.add(new ThuongHieu("TH004", "Owen        ")); // 3 sp
    }
    public static void taoDSPhieuBaoHanh()
    {
        dsPhieuBaoHanh.add(new PhieuBaoHanh("PBH001",1)); 
        dsPhieuBaoHanh.add(new PhieuBaoHanh("PBH002",2));
        dsPhieuBaoHanh.add(new PhieuBaoHanh("PBH003",3));
        dsPhieuBaoHanh.add(new PhieuBaoHanh("PBH004",6));
        dsPhieuBaoHanh.add(new PhieuBaoHanh("PBH005",8));
        dsPhieuBaoHanh.add(new PhieuBaoHanh("PBH006",10));
        dsPhieuBaoHanh.add(new PhieuBaoHanh("PBH007",12));
    }
    public static void taoDSSanPham()
    {
        dsSanPham.add(new SanPham("SP001", "Áo khoắc  ", dsThuongHieu.get(2).maThuongHieu, dsPhieuBaoHanh.get(0).maPhieuBaoHanh, dsThuongHieu.get(2), dsPhieuBaoHanh.get(0)));
        dsSanPham.add(new SanPham("SP002", "Áo thun   ", dsThuongHieu.get(2).maThuongHieu, dsPhieuBaoHanh.get(1).maPhieuBaoHanh, dsThuongHieu.get(2), dsPhieuBaoHanh.get(1)));
        dsSanPham.add(new SanPham("SP003", "Áo sơ mi  ", dsThuongHieu.get(3).maThuongHieu, dsPhieuBaoHanh.get(2).maPhieuBaoHanh, dsThuongHieu.get(3), dsPhieuBaoHanh.get(2)));
        dsSanPham.add(new SanPham("SP004", "Quần Jeans", dsThuongHieu.get(0).maThuongHieu, dsPhieuBaoHanh.get(3).maPhieuBaoHanh, dsThuongHieu.get(0), dsPhieuBaoHanh.get(3)));
        dsSanPham.add(new SanPham("SP005", "Quần Kaki ", dsThuongHieu.get(1).maThuongHieu, dsPhieuBaoHanh.get(4).maPhieuBaoHanh, dsThuongHieu.get(1), dsPhieuBaoHanh.get(4)));
        dsSanPham.add(new SanPham("SP006", "Quần Tây  ", dsThuongHieu.get(3).maThuongHieu, dsPhieuBaoHanh.get(5).maPhieuBaoHanh, dsThuongHieu.get(3), dsPhieuBaoHanh.get(5)));
        dsSanPham.add(new SanPham("SP007", "Quần Baggy", dsThuongHieu.get(3).maThuongHieu, dsPhieuBaoHanh.get(6).maPhieuBaoHanh, dsThuongHieu.get(3), dsPhieuBaoHanh.get(6)));
    }
    public static void taoDSLoaiNhanVien()
    {
        dsLoaiNhanVien.add(new LoaiNhanVien("LNV001", "Nhập kho")); // 2 nv
        dsLoaiNhanVien.add(new LoaiNhanVien("LNV002", "Tư Vấn  ")); // 3 nv
    }
    public static void taoDSNhanVien()
    {
        dsNhanVien.add(new NhanVien("NV001", "Huỳnh Văn Đồng  ", "Quận 9      ", "0905628002", 2015, dsLoaiNhanVien.get(0).maLoaiNhanVien, dsLoaiNhanVien.get(0))); // 6 năm
        dsNhanVien.add(new NhanVien("NV002", "Hồ Thanh Danh   ", "Quận Thủ Đức", "0954168727", 2016, dsLoaiNhanVien.get(0).maLoaiNhanVien, dsLoaiNhanVien.get(0))); // 5 năm
        dsNhanVien.add(new NhanVien("NV003", "Lê Thùy Trang   ", "Quận 2      ", "0916396114", 2014, dsLoaiNhanVien.get(1).maLoaiNhanVien, dsLoaiNhanVien.get(1))); // 7 năm
        dsNhanVien.add(new NhanVien("NV004", "Hoàng Gia Hân   ", "Quận 9      ", "0985732659", 2015, dsLoaiNhanVien.get(1).maLoaiNhanVien, dsLoaiNhanVien.get(1))); // 6 năm
        dsNhanVien.add(new NhanVien("NV005", "Nguyễn Trúc Linh", "Quận 1      ", "0930628002", 2017, dsLoaiNhanVien.get(1).maLoaiNhanVien, dsLoaiNhanVien.get(1))); // 4 năm
    }
    public static void taoDSHoaDonNhapHang()
    {
        dsHoaDonNhapHang.add(new HoaDonNhapHang("HDN001", dsNoiCungCap.get(0).maNoiCungCap, dsNhanVien.get(0).maNhanVien, dsNoiCungCap.get(0), dsNhanVien.get(0)));
        dsHoaDonNhapHang.add(new HoaDonNhapHang("HDN002", dsNoiCungCap.get(1).maNoiCungCap, dsNhanVien.get(1).maNhanVien, dsNoiCungCap.get(1), dsNhanVien.get(1)));
        dsHoaDonNhapHang.add(new HoaDonNhapHang("HDN003", dsNoiCungCap.get(2).maNoiCungCap, dsNhanVien.get(0).maNhanVien, dsNoiCungCap.get(2), dsNhanVien.get(0)));
        dsHoaDonNhapHang.add(new HoaDonNhapHang("HDN004", dsNoiCungCap.get(3).maNoiCungCap, dsNhanVien.get(1).maNhanVien, dsNoiCungCap.get(3), dsNhanVien.get(1)));
        dsHoaDonNhapHang.add(new HoaDonNhapHang("HDN005", dsNoiCungCap.get(2).maNoiCungCap, dsNhanVien.get(0).maNhanVien, dsNoiCungCap.get(2), dsNhanVien.get(0)));
        dsHoaDonNhapHang.add(new HoaDonNhapHang("HDN006", dsNoiCungCap.get(2).maNoiCungCap, dsNhanVien.get(0).maNhanVien, dsNoiCungCap.get(2), dsNhanVien.get(0)));
    }
    public static void taoDSChiTietHDNhapHang()
    {
        dsChiTietHDNhapHang.add(new ChiTietHoaDonNhapHang(dsHoaDonNhapHang.get(0).maHoaDonNhapHang, dsSanPham.get(0).maSanPham,20, 2000000, dsHoaDonNhapHang.get(0), dsSanPham.get(0)));//100
        dsChiTietHDNhapHang.add(new ChiTietHoaDonNhapHang(dsHoaDonNhapHang.get(0).maHoaDonNhapHang, dsSanPham.get(3).maSanPham,10, 1200000, dsHoaDonNhapHang.get(0), dsSanPham.get(3)));//120
        dsChiTietHDNhapHang.add(new ChiTietHoaDonNhapHang(dsHoaDonNhapHang.get(1).maHoaDonNhapHang, dsSanPham.get(1).maSanPham,15, 750000 , dsHoaDonNhapHang.get(1), dsSanPham.get(1)));//50
        dsChiTietHDNhapHang.add(new ChiTietHoaDonNhapHang(dsHoaDonNhapHang.get(1).maHoaDonNhapHang, dsSanPham.get(4).maSanPham,15, 4500000, dsHoaDonNhapHang.get(1), dsSanPham.get(4)));//300
        dsChiTietHDNhapHang.add(new ChiTietHoaDonNhapHang(dsHoaDonNhapHang.get(2).maHoaDonNhapHang, dsSanPham.get(2).maSanPham,10, 4000000, dsHoaDonNhapHang.get(2), dsSanPham.get(2)));//400
        dsChiTietHDNhapHang.add(new ChiTietHoaDonNhapHang(dsHoaDonNhapHang.get(2).maHoaDonNhapHang, dsSanPham.get(5).maSanPham,10, 2000000, dsHoaDonNhapHang.get(2), dsSanPham.get(5)));//200
        dsChiTietHDNhapHang.add(new ChiTietHoaDonNhapHang(dsHoaDonNhapHang.get(3).maHoaDonNhapHang, dsSanPham.get(6).maSanPham,20, 3000000, dsHoaDonNhapHang.get(3), dsSanPham.get(6)));//150
        dsChiTietHDNhapHang.add(new ChiTietHoaDonNhapHang(dsHoaDonNhapHang.get(4).maHoaDonNhapHang, dsSanPham.get(1).maSanPham,10, 500000 , dsHoaDonNhapHang.get(4), dsSanPham.get(1)));//50
        dsChiTietHDNhapHang.add(new ChiTietHoaDonNhapHang(dsHoaDonNhapHang.get(5).maHoaDonNhapHang, dsSanPham.get(4).maSanPham,20, 6000000, dsHoaDonNhapHang.get(5), dsSanPham.get(4)));//300
    }       
    public static void taoDSLoaiKhachHang()
    {
        dsLoaiKhachHang.add(new LoaiKhachHang("LKH001", "Cơ bản")); // 2 kh
        dsLoaiKhachHang.add(new LoaiKhachHang("LKH002", "Thân Thiết")); // 2 kh
        dsLoaiKhachHang.add(new LoaiKhachHang("LKH003", "VIP")); // 3 kh
    }
    public static void taoDSKhachHang()
    {
        dsKhachHang.add(new KhachHang("KH001", "Võ Thị Cẩm Nhung", "Quận 9         ", "0965844647", dsLoaiKhachHang.get(0).maLoaiKhachHang, dsLoaiKhachHang.get(0), new ArrayList<HoaDonMuaHang>()));
        dsKhachHang.add(new KhachHang("KH002", "Nguyễn Quang Huy", "Quận 2         ", "0997534464", dsLoaiKhachHang.get(0).maLoaiKhachHang, dsLoaiKhachHang.get(0), new ArrayList<HoaDonMuaHang>()));
        dsKhachHang.add(new KhachHang("KH003", "Phạm Duy Phương ", "Quận 1         ", "0968572647", dsLoaiKhachHang.get(1).maLoaiKhachHang, dsLoaiKhachHang.get(1), new ArrayList<HoaDonMuaHang>()));
        dsKhachHang.add(new KhachHang("KH004", "Nguyễn Thanh Sơn", "Quận Thủ Đức   ", "0978424647", dsLoaiKhachHang.get(1).maLoaiKhachHang, dsLoaiKhachHang.get(1), new ArrayList<HoaDonMuaHang>()));
        dsKhachHang.add(new KhachHang("KH005", "Lê Thị Yến Nhi  ", "Quận Bình Thạnh", "0971544647", dsLoaiKhachHang.get(2).maLoaiKhachHang, dsLoaiKhachHang.get(2), new ArrayList<HoaDonMuaHang>()));
        dsKhachHang.add(new KhachHang("KH006", "Huỳnh Thị Mỹ Anh", "Quận Thủ Đức   ", "0955844647", dsLoaiKhachHang.get(2).maLoaiKhachHang, dsLoaiKhachHang.get(2), new ArrayList<HoaDonMuaHang>()));
        dsKhachHang.add(new KhachHang("KH007", "Trần Quốc Huy   ", "Quận 1         ", "0938744647", dsLoaiKhachHang.get(2).maLoaiKhachHang, dsLoaiKhachHang.get(2), new ArrayList<HoaDonMuaHang>())); // 3 hinh thuc thanh toan
    }
    public static void taoDSHinhThucThanhToan()
    {
        dsHinhThucThanhToan.add(new HinhThucThanhToan("TT001", "Tiền mặt")); // 3 hoa don
        dsHinhThucThanhToan.add(new HinhThucThanhToan("TT002", "Thẻ ATM ")); // 5 hoa don
        dsHinhThucThanhToan.add(new HinhThucThanhToan("TT003", "Banking "));// 3 hoa don
    }
    public static void taoDSHoaDonMuaHang()
    {
        dsHoaDonMuaHang.add(new HoaDonMuaHang("HDM001",600000, dsNhanVien.get(4).maNhanVien, dsKhachHang.get(0).maKhachHang, dsHinhThucThanhToan.get(0).maHinhThucThanhToan, dsNhanVien.get(4), dsKhachHang.get(0), dsHinhThucThanhToan.get(0)));

        dsHoaDonMuaHang.add(new HoaDonMuaHang("HDM002",600000, dsNhanVien.get(3).maNhanVien, dsKhachHang.get(1).maKhachHang, dsHinhThucThanhToan.get(1).maHinhThucThanhToan, dsNhanVien.get(3), dsKhachHang.get(1), dsHinhThucThanhToan.get(1)));

        dsHoaDonMuaHang.add(new HoaDonMuaHang("HDM003",2600000, dsNhanVien.get(3).maNhanVien, dsKhachHang.get(2).maKhachHang, dsHinhThucThanhToan.get(0).maHinhThucThanhToan, dsNhanVien.get(3), dsKhachHang.get(2), dsHinhThucThanhToan.get(0)));

        dsHoaDonMuaHang.add(new HoaDonMuaHang("HDM004",3500000, dsNhanVien.get(3).maNhanVien, dsKhachHang.get(3).maKhachHang, dsHinhThucThanhToan.get(2).maHinhThucThanhToan, dsNhanVien.get(3), dsKhachHang.get(3), dsHinhThucThanhToan.get(2)));
        dsHoaDonMuaHang.add(new HoaDonMuaHang("HDM005",3500000, dsNhanVien.get(2).maNhanVien, dsKhachHang.get(3).maKhachHang, dsHinhThucThanhToan.get(1).maHinhThucThanhToan, dsNhanVien.get(2), dsKhachHang.get(3), dsHinhThucThanhToan.get(1)));

        dsHoaDonMuaHang.add(new HoaDonMuaHang("HDM006",1000000, dsNhanVien.get(2).maNhanVien, dsKhachHang.get(4).maKhachHang, dsHinhThucThanhToan.get(2).maHinhThucThanhToan, dsNhanVien.get(2), dsKhachHang.get(4), dsHinhThucThanhToan.get(2)));

        dsHoaDonMuaHang.add(new HoaDonMuaHang("HDM007",1200000, dsNhanVien.get(2).maNhanVien, dsKhachHang.get(5).maKhachHang, dsHinhThucThanhToan.get(1).maHinhThucThanhToan, dsNhanVien.get(2), dsKhachHang.get(5), dsHinhThucThanhToan.get(1)));
        dsHoaDonMuaHang.add(new HoaDonMuaHang("HDM008",3500000, dsNhanVien.get(3).maNhanVien, dsKhachHang.get(5).maKhachHang, dsHinhThucThanhToan.get(1).maHinhThucThanhToan, dsNhanVien.get(3), dsKhachHang.get(5), dsHinhThucThanhToan.get(1)));

        dsHoaDonMuaHang.add(new HoaDonMuaHang("HDM009",3500000, dsNhanVien.get(3).maNhanVien, dsKhachHang.get(6).maKhachHang, dsHinhThucThanhToan.get(0).maHinhThucThanhToan, dsNhanVien.get(3), dsKhachHang.get(6), dsHinhThucThanhToan.get(0)));
        dsHoaDonMuaHang.add(new HoaDonMuaHang("HDM010",2100000, dsNhanVien.get(3).maNhanVien, dsKhachHang.get(6).maKhachHang, dsHinhThucThanhToan.get(1).maHinhThucThanhToan, dsNhanVien.get(3), dsKhachHang.get(6), dsHinhThucThanhToan.get(1)));
        dsHoaDonMuaHang.add(new HoaDonMuaHang("HDM011",600000, dsNhanVien.get(4).maNhanVien, dsKhachHang.get(6).maKhachHang, dsHinhThucThanhToan.get(2).maHinhThucThanhToan, dsNhanVien.get(4), dsKhachHang.get(6), dsHinhThucThanhToan.get(2)));
    }
    public static void capNhatDSHoaDon_KhachHang()
    {
        dsKhachHang.get(0).dsHoaDon_KhachHang.add(dsHoaDonMuaHang.get(0) );
        dsKhachHang.get(1).dsHoaDon_KhachHang.add(dsHoaDonMuaHang.get(1) );
        dsKhachHang.get(2).dsHoaDon_KhachHang.add(dsHoaDonMuaHang.get(2) );
        dsKhachHang.get(3).dsHoaDon_KhachHang.add(dsHoaDonMuaHang.get(3) );
        dsKhachHang.get(3).dsHoaDon_KhachHang.add(dsHoaDonMuaHang.get(4) );
        dsKhachHang.get(4).dsHoaDon_KhachHang.add(dsHoaDonMuaHang.get(5) );
        dsKhachHang.get(5).dsHoaDon_KhachHang.add(dsHoaDonMuaHang.get(6) );
        dsKhachHang.get(5).dsHoaDon_KhachHang.add(dsHoaDonMuaHang.get(7) );
        dsKhachHang.get(6).dsHoaDon_KhachHang.add(dsHoaDonMuaHang.get(8) );
        dsKhachHang.get(6).dsHoaDon_KhachHang.add(dsHoaDonMuaHang.get(9) );
        dsKhachHang.get(6).dsHoaDon_KhachHang.add(dsHoaDonMuaHang.get(10));
    }
    public static void taoDSChiTietHDMuaHang()
    {
        dsChiTietHDMuaHang.add(new ChiTietHoaDonMuaHang(dsHoaDonMuaHang.get(0).maHoaDonMuaHang, dsSanPham.get(0).maSanPham, 5 , 600000 , dsHoaDonMuaHang.get(0), dsSanPham.get(0))); // 120

        dsChiTietHDMuaHang.add(new ChiTietHoaDonMuaHang(dsHoaDonMuaHang.get(1).maHoaDonMuaHang, dsSanPham.get(1).maSanPham, 5 , 600000 , dsHoaDonMuaHang.get(1), dsSanPham.get(1))); // 120

        dsChiTietHDMuaHang.add(new ChiTietHoaDonMuaHang(dsHoaDonMuaHang.get(2).maHoaDonMuaHang, dsSanPham.get(5).maSanPham, 5 , 1100000, dsHoaDonMuaHang.get(2), dsSanPham.get(5))); // 220
        dsChiTietHDMuaHang.add(new ChiTietHoaDonMuaHang(dsHoaDonMuaHang.get(2).maHoaDonMuaHang, dsSanPham.get(3).maSanPham, 10, 1500000, dsHoaDonMuaHang.get(2), dsSanPham.get(3))); // 150
        
        dsChiTietHDMuaHang.add(new ChiTietHoaDonMuaHang(dsHoaDonMuaHang.get(3).maHoaDonMuaHang, dsSanPham.get(4).maSanPham, 10, 3500000, dsHoaDonMuaHang.get(3), dsSanPham.get(4))); // 350
        dsChiTietHDMuaHang.add(new ChiTietHoaDonMuaHang(dsHoaDonMuaHang.get(4).maHoaDonMuaHang, dsSanPham.get(2).maSanPham, 5 , 3500000, dsHoaDonMuaHang.get(4), dsSanPham.get(2))); // 700

        dsChiTietHDMuaHang.add(new ChiTietHoaDonMuaHang(dsHoaDonMuaHang.get(5).maHoaDonMuaHang, dsSanPham.get(6).maSanPham, 5 , 1000000, dsHoaDonMuaHang.get(5), dsSanPham.get(6))); // 200

        dsChiTietHDMuaHang.add(new ChiTietHoaDonMuaHang(dsHoaDonMuaHang.get(6).maHoaDonMuaHang, dsSanPham.get(1).maSanPham, 15, 1800000, dsHoaDonMuaHang.get(6), dsSanPham.get(1))); // 120
        dsChiTietHDMuaHang.add(new ChiTietHoaDonMuaHang(dsHoaDonMuaHang.get(7).maHoaDonMuaHang, dsSanPham.get(4).maSanPham, 10, 3500000, dsHoaDonMuaHang.get(7), dsSanPham.get(4))); // 350

        dsChiTietHDMuaHang.add(new ChiTietHoaDonMuaHang(dsHoaDonMuaHang.get(8).maHoaDonMuaHang, dsSanPham.get(4).maSanPham, 10, 3500000, dsHoaDonMuaHang.get(8), dsSanPham.get(4))); // 350
        dsChiTietHDMuaHang.add(new ChiTietHoaDonMuaHang(dsHoaDonMuaHang.get(9).maHoaDonMuaHang, dsSanPham.get(5).maSanPham, 5 , 1100000, dsHoaDonMuaHang.get(9), dsSanPham.get(5))); // 220
        dsChiTietHDMuaHang.add(new ChiTietHoaDonMuaHang(dsHoaDonMuaHang.get(9).maHoaDonMuaHang, dsSanPham.get(6).maSanPham, 5 , 1000000, dsHoaDonMuaHang.get(9), dsSanPham.get(6))); // 200
        dsChiTietHDMuaHang.add(new ChiTietHoaDonMuaHang(dsHoaDonMuaHang.get(10).maHoaDonMuaHang, dsSanPham.get(0).maSanPham, 5 , 600000 , dsHoaDonMuaHang.get(10), dsSanPham.get(0))); // 120
    }
	
    
    public static void Linq01(String loaiKhachHang) 
    {  
    	//  Cho biết tên, địa chỉ và số điện thoại của các khách hàng theo loại cho trước.
    	List<KhachHang> dsKH = dsKhachHang
    			.stream()
    			.filter(kh -> kh.loaiKhachHang.tenLoaiKhachHang == loaiKhachHang)
    			.collect(Collectors.toList());
    	
    	System.out.println("\t======================== Danh sách khách hàng loại " + loaiKhachHang + " ========================"); 
    	System.out.println("\t          Tên khách hàng      |      Địa chỉ         |       SĐT");
    	for(KhachHang kh:dsKH) {
    		System.out.println("\t\t  " + kh.tenKhachHang + "    |   " + kh.diaChi + "    |    " + kh.SDT );    		   		
    	}    	
    }
        
    public static void Linq02()
    {
    	// Cho biết số lượng sản phẩm đã mua của mỗi khách hàng trong mỗi hóa đơn.  
    	Map<Object, Map<Object, Integer>> ds = dsChiTietHDMuaHang
    			.stream()
				.collect(Collectors.groupingBy(kh -> kh.hoaDonMuaHang.khachHang.tenKhachHang, 
						Collectors.groupingBy(hd -> hd.hoaDonMuaHang.maHoaDonMuaHang, 
						Collectors.summingInt(sl -> sl.soLuong))));    	    	
    	
    	for(Entry <Object, Map<Object, Integer>> kh:ds.entrySet())
    	{
    		System.out.println("\t         Khách hàng " + kh.getKey() );
    		System.out.println("\t     Mã hóa đơn  |     Số lượng");
    		for(Entry<Object, Integer> hd:kh.getValue().entrySet())
    		{
    			System.out.println("\t      " + hd.getKey() + "     |     " + hd.getValue());
    		}
    	}
    }
    
	public static void Linq03()
    {
		// Cho biết mã và tên các sản phẩm hết hàng. 
        // 1: Tình tổng số lượng sản phẩm đã nhập theo từng sản phẩm.
        // 2: Tình tổng số lượng sản phẩm đã mua theo từng sản phẩm.
        // 3: Kiểm tra nếu số lượng nhập bằng số lượng mua (số lượng nhập - số lượng mua == 0) => sản phẩm hết hàng.
    	Map<Object, Integer> dsSPNhap = dsChiTietHDNhapHang
    			.stream()
    			.collect(Collectors.groupingBy(sp -> sp.maSanPham,
    					Collectors.summingInt(sl ->sl.soLuong)));
    	
    	Map<Object, Integer> dsSPMua = dsChiTietHDMuaHang
    			.stream()
    			.collect(Collectors.groupingBy(sp -> sp.maSanPham,
    					Collectors.summingInt(sl ->sl.soLuong)));
    	
    	List<Entry<Object, Integer>> dsSPHetHang = dsSPNhap.entrySet()
    			.stream()
    			.filter(b -> dsSPMua.entrySet().stream()
    					.anyMatch(m -> b.getKey().equals(m.getKey()) && b.getValue().equals(m.getValue())))
    			.collect(Collectors.toList());
    	   	
    	List<SanPham> dsSP = dsSanPham
    			.stream()
    			.filter(p -> dsSPHetHang
    					.stream()
    					.anyMatch(f -> p.maSanPham.equals(f.getKey())))
    			.collect(Collectors.toList());    	 
    	
    	System.out.println("\t============= Danh sách sản phẩm hết hàng =============");
    	System.out.println("\t           Mã SP      |      Tên SP ");
    	for(SanPham sp:dsSP)
    	{
    		System.out.println("\t           " + sp.maSanPham + "      |      " + sp.tenSanPham);
    	}   			
    }
         
	public static void Linq04()
    {
    	//  Cho biết thương hiệu có sản phẩm bán chạy nhất. 
        // 1: Tính tổng số lượng sản phẩm đã bán của mỗi thương hiệu.
		// 2: Tìm số lượng sản phẩm đã bán nhiều nhất. 
        // 3: Lọc ra thương hiệu có số lượng sản phẩm đã bán nhiều nhất (có sản phẩm bán chạy nhất).
    	Map<Object, Integer> dsSLBan_TH = dsChiTietHDMuaHang
				.stream()
				.collect(Collectors.groupingBy(th -> th.sanPham.thuongHieu.tenThuongHieu,
						Collectors.summingInt(sl -> sl.soLuong)));
    	
    	Entry<Object, Integer> SLMax = dsSLBan_TH.entrySet()
    			.stream()
    			.max((a,b) -> a.getValue().compareTo(b.getValue()))
    			.get();
    	
    	List<Entry<Object, Integer>> dsTH_SLMax = dsSLBan_TH.entrySet()
    			.stream()
    			.filter(p -> p.getValue() == SLMax.getValue())
    			.collect(Collectors.toList());
    	
    	System.out.println("\t============= Thương hiệu có sản phẩm bán chạy nhất =============");
    	for(Entry<Object, Integer> th:dsTH_SLMax)
    	{
    		System.out.println("\t         Thương hiệu: " + th.getKey());
    	}
    }
        
	public static void Linq05()
    {
    	//  Cho biết nhân viên tư vấn nhiều hóa đơn mua có đơn giá lớn nhất. 
        // 1: Lọc ra các hóa đơn có đơn giá lớn nhất. 
		// 2: Đếm số lượng hóa đơn có đơn giá lớn nhất của mỗi nhân viên.
		// 3: Tìm số lượng nhất lớn trong các số lượng hóa đơn có đơn giá lớn nhất của mỗi nhân viên.
        // 4: Lọc ra nhân viên có nhiều hóa đơn có đơn giá lớn nhất.
    	Optional<HoaDonMuaHang> donGiaMax = dsHoaDonMuaHang
    			.stream()
    			.max(Comparator.comparingDouble(p -> p.donGia));
    	
    	Map<Object, Long> dsSLDonGiaMax_NV = dsHoaDonMuaHang
    			.stream()
    			.filter(p -> p.donGia == donGiaMax.get().donGia)
    			.collect(Collectors.groupingBy(nv -> nv.nhanVien.tenNhanVien,
    					Collectors.counting()));
    	
    	Entry<Object, Long> soHoaDonMax = dsSLDonGiaMax_NV.entrySet()
    			.stream()
    			.max((a,b) -> a.getValue().compareTo(b.getValue()))
    			.get();
    	
    	List<Entry<Object, Long>> NV_nhieuHDMax = dsSLDonGiaMax_NV.entrySet()
    			.stream()
    			.filter(p -> p.getValue() == soHoaDonMax.getValue())
    			.collect(Collectors.toList());
    		
    	System.out.println("\t============= Nhân viên tư vấn nhiều hóa đơn có đơn giá lớn nhất =============");
    	for(Entry<Object, Long> lkh:NV_nhieuHDMax)
    	{
    		System.out.println("\t         Nhân viên: " + lkh.getKey());
   		}	
    }
 
	public static void Linq06()
    {
    	Map<String, List<NhanVien>> kq = dsNhanVien.stream().collect(Collectors.groupingBy(p -> p.loaiNhanVien.tenLoaiNhanVien));
        for(Entry<String, List<NhanVien>> group : kq.entrySet())
        { 
        	System.out.println("============================ Loại nhân viên " + group.getKey() + " ============================\n");
        	System.out.format("               %-13s%-16s%-15s\n", "|Mã nhân viên" , " |Tên nhân viên", "  |Năm bắt đầu làm|");
        	System.out.println("               ------------------------------------------------");
        	for (NhanVien item : group.getValue())
        		System.out.format("               |%-13s|%-16s|%-15d|\n", item.maNhanVien, item.tenNhanVien, item.namBatDauLam);
        	System.out.println("\n\n");
        } 
    }
    
    public static void Linq07()
    {
        List<NhanVien> nhanVien = dsNhanVien.stream().filter(p -> p.namBatDauLam < 2016).collect(Collectors.toList());
        
        List<HoaDonMuaHang> kq = dsHoaDonMuaHang.stream()
				        		.filter(p -> nhanVien.stream()
				        					.anyMatch(f -> p.maNhanVien.equals(f.maNhanVien))).collect(Collectors.toList());
        System.out.println("=============================== Danh sách những hợp đồng có nhân viên kinh nghiệm trên 5 năm tư vấn ===============================\n");
        System.out.format("                              %-15s%-20s%-20s%-15s\n", "|Mã hợp đồng" , " |Mã số nhân viên", "  |Tên nhân viên", "|Năm bắt đầu làm|");
        System.out.println("                             --------------------------------------------------------------------------");
       
        for (HoaDonMuaHang item : kq )
        		System.out.format("                              |%-15s|%-20s|%-17s|%-15d|\n", item.maHoaDonMuaHang, item.maNhanVien, item.nhanVien.tenNhanVien, item.nhanVien.namBatDauLam);
        System.out.println("\n\n");
    }
    
    public static void Linq08()
    {
        Optional<ChiTietHoaDonMuaHang> max = dsChiTietHDMuaHang.stream().max(Comparator.comparingDouble(p -> p.donGia));
        List<ChiTietHoaDonMuaHang> dsHD = dsChiTietHDMuaHang.stream()
        									.filter(p -> p.donGia == max.get().donGia).collect(Collectors.toList());
        
        List<HoaDonMuaHang> kq = dsHoaDonMuaHang.stream()
				        		.filter(p -> dsHD.stream()
				        					.anyMatch(f -> p.maHoaDonMuaHang.equals(f.maHoaDonMuaHang)))
				        		
				        					.collect(Collectors.toList());
        System.out.println("=============================== Danh sách những khách hàng mua hàng nhiều tiền nhất ===============================\n");
        System.out.format("                    %-15s%-20s%-30s%-15s\n", "|Mã khách hàng" , " |Tên khách hàng", "  |Mã hóa đơn mua hàng", "|Số tiền |");
        System.out.println("                   -----------------------------------------------------------------------------");
       
        for (HoaDonMuaHang item : kq )
        		System.out.format("                    |%-15s|%-20s|%-27s|%-8.0f|\n", item.khachHang.maKhachHang, item.khachHang.tenKhachHang, item.maHoaDonMuaHang, max.get().donGia);   
        System.out.println("\n\n");
    }
    
    public static void Linq09()
    {
    	List<ChiTietHoaDonMuaHang> dsBan = dsChiTietHDMuaHang.stream()
    			.collect(Collectors.groupingBy(p -> p.maSanPham))
    			.entrySet().stream()
    			.map(e -> e.getValue().stream()
    					.reduce((f1,f2) -> new ChiTietHoaDonMuaHang(f1.maSanPham, f1.sanPham ,f1.donGia + f2.donGia, f1.soLuong + f2.soLuong)))
    			.map(f -> f.get())
    			.collect(Collectors.toList());   
    	List<ChiTietHoaDonNhapHang> dsNhap = dsChiTietHDNhapHang.stream()
    			.collect(Collectors.groupingBy(p -> p.maSanPham))
    			.entrySet().stream()
    			.map(e -> e.getValue().stream()
    					.reduce((f1,f2) -> new ChiTietHoaDonNhapHang(f1.maSanPham, f1.sanPham, f1.donGia + f2.donGia, f1.soLuong + f2.soLuong)))
    			.map(f -> f.get())
    			.collect(Collectors.toList());
    	int length = dsBan.size();
    	for (int i=0; i<length; i++)
    	{
    		dsBan.get(i).maSanPham = dsNhap.get(i).maSanPham;
    		dsBan.get(i).donGia = dsBan.get(i).donGia - (dsNhap.get(i).donGia/dsNhap.get(i).soLuong)*dsBan.get(i).soLuong;
    		dsBan.get(i).maSanPham = dsNhap.get(i).maSanPham;
    	}
    	
    	List<ChiTietHoaDonMuaHang> sortedList = dsBan.stream()
    			.sorted((h1, h2) -> h1.getMaSanPham().compareTo(h2.maSanPham))
    			.collect(Collectors.toList());

    	System.out.println("=========================== Danh sách tiền lời theo từng sản phẩm ===========================\n");
        System.out.format("                       %-15s%-20s%-15s\n", "|Mã sản phẩm" , " |Tên sản phẩm", "|Tiền lời |");
        System.out.println("                      ------------------------------------------------");
       
        for (ChiTietHoaDonMuaHang item : sortedList )
        		System.out.format("                       |%-15s|%-18s|%-9.0f|\n", item.maSanPham, item.sanPham.tenSanPham, item.donGia);   
    	
        System.out.println("\n\n");
    }
    
    public static void Linq10() 
    {
    	 List<ChiTietHoaDonMuaHang> dsKH_SLMax = dsChiTietHDMuaHang.stream()
	        		.filter(p -> dsHoaDonMuaHang.stream()
	        					.anyMatch(f -> p.maHoaDonMuaHang.equals(f.maHoaDonMuaHang))).collect(Collectors.groupingBy(p -> p.hoaDonMuaHang.khachHang.tenKhachHang))
	        					.entrySet().stream()
	        					.map(e -> e.getValue().stream()
	        							.max((f1, f2) -> f1.soLuong - f2.soLuong).get()).collect(Collectors.toList());
    	 
    	 List<ChiTietHoaDonMuaHang> kq = dsChiTietHDMuaHang.stream()
    			 .filter(p -> dsKH_SLMax.stream()
    					 .anyMatch(f -> p.hoaDonMuaHang.khachHang.tenKhachHang.equals(f.hoaDonMuaHang.khachHang.tenKhachHang) && p.soLuong == f.soLuong))
    			 .map(p -> p).collect(Collectors.toList());    	 
    	 
    	 System.out.println("===================== Danh sách thương hiệu khách hàng sử dụng nhiều nhất =====================\n");
         System.out.format("                         %-22s%-20s%n", "|Tên khách hàng" , " |Tên thương hiệu|");
         System.out.println("                        ------------------------------------------");
        
         for (ChiTietHoaDonMuaHang item : kq )
         		System.out.format("                         |%-22s|%-15s|\n", item.hoaDonMuaHang.khachHang.tenKhachHang, item.sanPham.thuongHieu.tenThuongHieu);   
 
         System.out.println("\n\n");
    }
	

	public static void MenuLinQ()
    {
    	@SuppressWarnings("resource")
		Scanner sc = new Scanner(System.in);
    	while (true)
        {
    		System.out.println("\t================================= Chọn danh sách lệnh =================================");
    		System.out.println("\t\t1.Cho biết tên, địa chỉ và số điện thoại của các khách hàng theo loại cho trước.");
    		System.out.println("\t\t2.Cho biết số lượng sản phẩm đã mua của mỗi khách hàng trong mỗi hóa đơn.");
    		System.out.println("\t\t3.Cho biết mã và tên các sản phẩm hết hàng.");
    		System.out.println("\t\t4.Cho biết thương hiệu có sản phẩm bán chạy nhất.");
    		System.out.println("\t\t5.Cho biết nhân viên tư vấn nhiều hóa đơn mua có đơn giá lớn nhất.");
    		System.out.println("\t\t6.In danh sách nhân viên theo loại nhân viên.");
    		System.out.println("\t\t7.In danh sách những hợp đồng có nhân viên kinh nghiệm trên 5 năm tư vấn");
    		System.out.println("\t\t8.In danh sách những khách hàng mua hàng nhiều tiền nhất.");
    		System.out.println("\t\t9.In danh sách tiền lời theo từng sản phẩm.");
    		System.out.println("\t\t10.In danh sách thương hiệu khách hàng sử dụng nhiều nhất.");
    		System.out.println("\t\t0.Thoát.\n");
    		System.out.print("\tMời nhập lựa chọn: ");
    		int choose = sc.nextInt();
    		
            boolean exit = false;
            switch (choose)
            {
            	case 1:
            		System.out.println("\t============= Danh sách khách hàng =============");
            		System.out.println("\t\t1.Cơ bản");
            		System.out.println("\t\t2.Thân Thiết");
            		System.out.println("\t\t3.VIP");
            		System.out.print("\tBạn chọn khách hàng loại: ");
            		int ch = sc.nextInt();
            		
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
                default:                	
                    exit = true;
                    break;
            }
            if (exit)
                break;
            System.out.println("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Tiến trình kết thúc ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        }
    }
    
    public static void main(String[] args) {
		
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
                
        MenuLinQ();
	}

}
