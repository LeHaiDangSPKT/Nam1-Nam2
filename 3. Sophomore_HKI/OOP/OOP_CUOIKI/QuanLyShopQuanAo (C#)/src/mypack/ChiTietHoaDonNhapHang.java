package mypack;

public class ChiTietHoaDonNhapHang {
	
	public String maHoaDonNhapHang; 	// primary key
    public String maSanPham; 			// primary key
    public int soLuong ;
    public double donGia ;

    //singular
    public HoaDonNhapHang hoaDonNhapHang;
    public SanPham sanPham;

	// constructor
    public ChiTietHoaDonNhapHang() { }
    public ChiTietHoaDonNhapHang(ChiTietHoaDonNhapHang cthd)
    {
        this.maHoaDonNhapHang = cthd.maHoaDonNhapHang;
        this.maSanPham = cthd.maSanPham;
        this.soLuong = cthd.soLuong;
        this.donGia = cthd.donGia;
        this.hoaDonNhapHang = cthd.hoaDonNhapHang;
        this.sanPham = cthd.sanPham;
    }
    public ChiTietHoaDonNhapHang(String maHoaDonNhapHang, String maSanPham, int soLuong, double donGia,
        HoaDonNhapHang hoaDonNhapHang, SanPham sanPham)
    {
        this.maHoaDonNhapHang = maHoaDonNhapHang;
        this.maSanPham = maSanPham;
        this.soLuong = soLuong;
        this.donGia = donGia;
        this.hoaDonNhapHang = hoaDonNhapHang;
        this.sanPham = sanPham;
    }   
    public ChiTietHoaDonNhapHang(String maSanPham, SanPham sanPham, double donGia, int soLuong)
    {
    	this.maSanPham = maSanPham;
        this.soLuong = soLuong;
        this.donGia = donGia;
        this.sanPham = sanPham;
    }
    
    // getter - setter
    public String getmaHoaDonNhapHang() {
		return maHoaDonNhapHang;
	}
	public void setmaHoaDonNhapHang(String maHoaDonNhapHang) {
		this.maHoaDonNhapHang = maHoaDonNhapHang;
	}
	public String getMaSanPham() {
		return maSanPham;
	}
	public void setMaSanPham(String maSanPham) {
		this.maSanPham = maSanPham;
	}
	public int getSoLuong() {
		return soLuong;
	}
	public void setSoLuong(int soLuong) {
		this.soLuong = soLuong;
	}
	public double getDonGia() {
		return donGia;
	}
	public void setDonGia(double donGia) {
		this.donGia = donGia;
	}
	public HoaDonNhapHang gethoaDonNhapHang() {
		return hoaDonNhapHang;
	}
	public void setHoaDonNhapHang(HoaDonNhapHang hoaDonNhapHang) {
		this.hoaDonNhapHang = hoaDonNhapHang;
	}
	public SanPham getSanPham() {
		return sanPham;
	}
	public void setSanPham(SanPham sanPham) {
		this.sanPham = sanPham;
	}   
}
