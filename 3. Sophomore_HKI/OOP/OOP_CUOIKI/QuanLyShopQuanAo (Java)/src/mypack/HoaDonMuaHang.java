package mypack;

public class HoaDonMuaHang {

	public String maHoaDonMuaHang;     // primary key    
	public double donGia;

	// foreign key
    public String maNhanVien;
    public String maKhachHang;
    public String maHinhThucThanhToan;

    // singular
    public NhanVien nhanVien;
    public KhachHang khachHang;
    public HinhThucThanhToan hinhThucThanhToan;

    // constructor
    public HoaDonMuaHang() { }
    public HoaDonMuaHang(HoaDonMuaHang hoaDonMua) 
    {
        this.maHoaDonMuaHang = hoaDonMua.maHoaDonMuaHang;
        this.donGia = hoaDonMua.donGia;
        this.maNhanVien = hoaDonMua.maNhanVien;
        this.maKhachHang = hoaDonMua.maKhachHang;
        this.maHinhThucThanhToan = hoaDonMua.maHinhThucThanhToan;
        this.nhanVien = hoaDonMua.nhanVien;
        this.khachHang = hoaDonMua.khachHang;
        this.hinhThucThanhToan = hoaDonMua.hinhThucThanhToan;
    }

    public HoaDonMuaHang(String maHoaDonMuaHang,double donGia, String maNhanVien,
    		String maKhachHang, String maHinhThucThanhToan, NhanVien nhanVien,
    		KhachHang khachHang, HinhThucThanhToan hinhThucThanhToan)
    {
        this.maHoaDonMuaHang = maHoaDonMuaHang;
        this.donGia = donGia;
        this.maNhanVien = maNhanVien;
        this.maKhachHang = maKhachHang;
        this.maHinhThucThanhToan = maHinhThucThanhToan;
        this.nhanVien = nhanVien;
        this.khachHang = khachHang;
        this.hinhThucThanhToan = hinhThucThanhToan;
    }
    
    // getter - setter
    public String getMaHoaDonMuaHang() {
		return maHoaDonMuaHang;
	}
	public void setMaHoaDonMuaHang(String maHoaDonMuaHang) {
		this.maHoaDonMuaHang = maHoaDonMuaHang;
	}
	public double getDonGia() {
		return donGia;
	}
	public void setDonGia(double donGia) {
		this.donGia = donGia;
	}
	public String getMaNhanVien() {
		return maNhanVien;
	}
	public void setMaNhanVien(String maNhanVien) {
		this.maNhanVien = maNhanVien;
	}
	public String getMaKhachHang() {
		return maKhachHang;
	}
	public void setMaKhachHang(String maKhachHang) {
		this.maKhachHang = maKhachHang;
	}
	public String getMaHinhThucThanhToan() {
		return maHinhThucThanhToan;
	}
	public void setMaHinhThucThanhToan(String maHinhThucThanhToan) {
		this.maHinhThucThanhToan = maHinhThucThanhToan;
	}
	public NhanVien getNhanVien() {
		return nhanVien;
	}
	public void setNhanVien(NhanVien nhanVien) {
		this.nhanVien = nhanVien;
	}
	public KhachHang getKhachHang() {
		return khachHang;
	}
	public void setKhachHang(KhachHang khachHang) {
		this.khachHang = khachHang;
	}
	public HinhThucThanhToan getHinhThucThanhToan() {
		return hinhThucThanhToan;
	}
	public void setHinhThucThanhToan(HinhThucThanhToan hinhThucThanhToan) {
		this.hinhThucThanhToan = hinhThucThanhToan;
	}

}
