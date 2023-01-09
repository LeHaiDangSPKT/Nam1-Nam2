package mypack;

public class ChiTietHoaDonMuaHang {

	public String maHoaDonMuaHang;		// primary key
    public String maSanPham;			// primary key
    public int soLuong;
    public double donGia;

    // singular
    public HoaDonMuaHang hoaDonMuaHang;
    public SanPham sanPham;
   
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
    public ChiTietHoaDonMuaHang(String maHoaDonMuaHang, String maSanPham, 
    		int soLuong, double donGia,HoaDonMuaHang hoaDonMuaHang, SanPham sanPham)
    {
        this.maHoaDonMuaHang = maHoaDonMuaHang;
        this.maSanPham = maSanPham;
        this.soLuong = soLuong;
        this.donGia = donGia;
        this.hoaDonMuaHang = hoaDonMuaHang;
        this.sanPham = sanPham;
    }
    
    public ChiTietHoaDonMuaHang( String maSanPham, SanPham sanPham,
    		double donGia, int soLuong)
    {
        this.maSanPham = maSanPham;
        this.sanPham = sanPham;
        this.soLuong = soLuong;
        this.donGia = donGia;
    }
    
    
    // getter - setter
    public String getMaHoaDonMuaHang() {
		return maHoaDonMuaHang;
	}
	public void setMaHoaDonMuaHang(String maHoaDonMuaHang) {
		this.maHoaDonMuaHang = maHoaDonMuaHang;
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
	public HoaDonMuaHang getHoaDonMuaHang() {
		return hoaDonMuaHang;
	}
	public void setHoaDonMuaHang(HoaDonMuaHang hoaDonMuaHang) {
		this.hoaDonMuaHang = hoaDonMuaHang;
	}
	public SanPham getSanPham() {
		return sanPham;
	}
	public void setSanPham(SanPham sanPham) {
		this.sanPham = sanPham;
	}   
}
