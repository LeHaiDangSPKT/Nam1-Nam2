package mypack;

public class NhanVien {
	
	public String maNhanVien;      // primary key    
	public String tenNhanVien;
    public String diaChi;
    public String SDT;
    public int namBatDauLam;
    public String maLoaiNhanVien;    // foreign key

    // singular
    public LoaiNhanVien loaiNhanVien;

    // constructor
    public NhanVien() { }
    public NhanVien(NhanVien nhanVien)
    {
        this.maNhanVien = nhanVien.maNhanVien;
        this.tenNhanVien = nhanVien.tenNhanVien;
        this.diaChi = nhanVien.diaChi;
        this.SDT = nhanVien.SDT;
        this.namBatDauLam = nhanVien.namBatDauLam;
        this.maLoaiNhanVien = nhanVien.maLoaiNhanVien;
        this.loaiNhanVien = nhanVien.loaiNhanVien;
    }
    public NhanVien(String maNhanVien, String tenNhanVien,
    		String diaChi, String SDT, int namBatDauLam,
    		String maLoaiNhanVien, LoaiNhanVien loaiNhanVien)
    {
        this.maNhanVien = maNhanVien;
        this.tenNhanVien = tenNhanVien;
        this.diaChi = diaChi;
        this.SDT = SDT;
        this.namBatDauLam = namBatDauLam;
        this.maLoaiNhanVien = maLoaiNhanVien;
        this.loaiNhanVien = loaiNhanVien;
    }
    
    // getter - setter
    public String getMaNhanVien() {
		return maNhanVien;
	}
	public void setMaNhanVien(String maNhanVien) {
		this.maNhanVien = maNhanVien;
	}
	public String getTenNhanVien() {
		return tenNhanVien;
	}
	public void setTenNhanVien(String tenNhanVien) {
		this.tenNhanVien = tenNhanVien;
	}	
	public String getDiaChi() {
		return diaChi;
	}
	public void setDiaChi(String diaChi) {
		this.diaChi = diaChi;
	}
	public String getSDT() {
		return SDT;
	}
	public void setSDT(String sDT) {
		SDT = sDT;
	}
	public int getNamBatDauLam() {
		return namBatDauLam;
	}
	public void setNamBatDauLam(int namBatDauLam) {
		this.namBatDauLam = namBatDauLam;
	}
	public String getMaLoaiNhanVien() {
		return maLoaiNhanVien;
	}
	public void setMaLoaiNhanVien(String maLoaiNhanVien) {
		this.maLoaiNhanVien = maLoaiNhanVien;
	}
	public LoaiNhanVien getLoaiNhanVien() {
		return loaiNhanVien;
	}
	public void setLoaiNhanVien(LoaiNhanVien loaiNhanVien) {
		this.loaiNhanVien = loaiNhanVien;
	}
}
