package mypack;

public class SanPham {
	
	public String maSanPham;     // primary key
    public String tenSanPham;

    // foreign key
    public String mathuongHieu;
    public String maPhieuBaoHanh;

    // singular
    public ThuongHieu thuongHieu;
    public PhieuBaoHanh phieuBaoHanh;

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
    }
    public SanPham(String maSanPham, String tenSanPham, String mathuongHieu, 
    		String maPhieuBaoHanh,ThuongHieu thuongHieu,PhieuBaoHanh phieuBaoHanh)
    {
        this.maSanPham = maSanPham;
        this.tenSanPham = tenSanPham;
        this.mathuongHieu = mathuongHieu;
        this.maPhieuBaoHanh = maPhieuBaoHanh;
        this.thuongHieu = thuongHieu;
        this.phieuBaoHanh = phieuBaoHanh;
    }
    
    // getter - setter
    public String getMaSanPham() {
		return maSanPham;
	}
	public void setMaSanPham(String maSanPham) {
		this.maSanPham = maSanPham;
	}
	public String getTenSanPham() {
		return tenSanPham;
	}
	public void setTenSanPham(String tenSanPham) {
		this.tenSanPham = tenSanPham;
	}
	public String getMathuongHieu() {
		return mathuongHieu;
	}
	public void setMathuongHieu(String mathuongHieu) {
		this.mathuongHieu = mathuongHieu;
	}
	public String getMaPhieuBaoHanh() {
		return maPhieuBaoHanh;
	}
	public void setMaPhieuBaoHanh(String maPhieuBaoHanh) {
		this.maPhieuBaoHanh = maPhieuBaoHanh;
	}
	public ThuongHieu getThuongHieu() {
		return thuongHieu;
	}
	public void setThuongHieu(ThuongHieu thuongHieu) {
		this.thuongHieu = thuongHieu;
	}
	public PhieuBaoHanh getPhieuBaoHanh() {
		return phieuBaoHanh;
	}
	public void setPhieuBaoHanh(PhieuBaoHanh phieuBaoHanh) {
		this.phieuBaoHanh = phieuBaoHanh;
	}
}
