package mypack;

public class LoaiKhachHang {

	public String maLoaiKhachHang; // primary key
	public String tenLoaiKhachHang;
	
	// constructor
	public LoaiKhachHang() { }
    public LoaiKhachHang(LoaiKhachHang loaiKhachHang)
    {
        this.maLoaiKhachHang = loaiKhachHang.maLoaiKhachHang;
        this.tenLoaiKhachHang = loaiKhachHang.tenLoaiKhachHang;           
    }
    public LoaiKhachHang(String maLoaiKhachHang, String tenLoaiKhachHang)
    {
        this.maLoaiKhachHang = maLoaiKhachHang;
        this.tenLoaiKhachHang = tenLoaiKhachHang;
    }
    
    // getter - setter
	public String getMaLoaiKhachHang() {
		return maLoaiKhachHang;
	}
	public void setMaLoaiKhachHang(String maLoaiKhachHang) {
		this.maLoaiKhachHang = maLoaiKhachHang;
	}
	public String getTenLoaiKhachHang() {
		return tenLoaiKhachHang;
	}
	public void setTenLoaiKhachHang(String tenLoaiKhachHang) {
		this.tenLoaiKhachHang = tenLoaiKhachHang;
	}
}
