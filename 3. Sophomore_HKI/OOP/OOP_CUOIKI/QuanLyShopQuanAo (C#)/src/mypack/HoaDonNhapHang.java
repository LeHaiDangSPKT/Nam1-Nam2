package mypack;

public class HoaDonNhapHang {
	
	public String maHoaDonNhapHang;		// primary key 
	
	// foreign key
    public String maNoiCungCap;
    public String maNhanVien;

    // singular
    public NoiCungCap noiCungCap;
    public NhanVien nhanVien;

    // constructor
    public HoaDonNhapHang() { }
    public HoaDonNhapHang(HoaDonNhapHang hd)
    {
        this.maHoaDonNhapHang = hd.maHoaDonNhapHang;
        this.maNoiCungCap = hd.maNoiCungCap;
        this.maNhanVien = hd.maNhanVien;
        this.noiCungCap = hd.noiCungCap;
        this.nhanVien = hd.nhanVien;
    }
    public HoaDonNhapHang(String maHoaDonNhapHang, String maNoiCungCap, String maNhanVien,
        NoiCungCap noiCungCap, NhanVien nhanVien)
    {
        this.maHoaDonNhapHang = maHoaDonNhapHang;
        this.maNoiCungCap = maNoiCungCap;
        this.maNhanVien = maNhanVien;
        this.noiCungCap = noiCungCap;
        this.nhanVien = nhanVien;
    }
    
    // getter - setter
    public String getMaHoaDonNhapHang() {
		return maHoaDonNhapHang;
	}
	public void setMaHoaDonNhapHang(String maHoaDonNhapHang) {
		this.maHoaDonNhapHang = maHoaDonNhapHang;
	}
	public String getMaNoiCungCap() {
		return maNoiCungCap;
	}
	public void setMaNoiCungCap(String maNoiCungCap) {
		this.maNoiCungCap = maNoiCungCap;
	}
	public String getMaNhanVien() {
		return maNhanVien;
	}
	public void setMaNhanVien(String maNhanVien) {
		this.maNhanVien = maNhanVien;
	}
	public NoiCungCap getNoiCungCap() {
		return noiCungCap;
	}
	public void setNoiCungCap(NoiCungCap noiCungCap) {
		this.noiCungCap = noiCungCap;
	}
	public NhanVien getNhanVien() {
		return nhanVien;
	}
	public void setNhanVien(NhanVien nhanVien) {
		this.nhanVien = nhanVien;
	}   
}

