package mypack;

public class LoaiNhanVien {

	public String maLoaiNhanVien;	// primary key   
	public String tenLoaiNhanVien;

    // constructor
    public LoaiNhanVien() { }
    public LoaiNhanVien(LoaiNhanVien loaiNhanVien)
    {
        this.maLoaiNhanVien = loaiNhanVien.maLoaiNhanVien;
        this.tenLoaiNhanVien = loaiNhanVien.tenLoaiNhanVien;
    }
    public LoaiNhanVien(String maLoaiNhanVien, String tenLoaiNhanVien)
    {
        this.maLoaiNhanVien = maLoaiNhanVien;
        this.tenLoaiNhanVien = tenLoaiNhanVien;
    }
    
    // getter - setter
    public String getMaLoaiNhanVien() {
		return maLoaiNhanVien;
	}
	public void setMaLoaiNhanVien(String maLoaiNhanVien) {
		this.maLoaiNhanVien = maLoaiNhanVien;
	}
	public String getTenLoaiNhanVien() {
		return tenLoaiNhanVien;
	}
	public void setTenLoaiNhanVien(String tenLoaiNhanVien) {
		this.tenLoaiNhanVien = tenLoaiNhanVien;
	}
}
