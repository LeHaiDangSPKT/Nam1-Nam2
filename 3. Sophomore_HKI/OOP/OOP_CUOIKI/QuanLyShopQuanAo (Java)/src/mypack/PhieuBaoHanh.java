package mypack;

public class PhieuBaoHanh {

	public String maPhieuBaoHanh;     // primary key
    public int thoiGianBaoHanh;    // đơn vị theo tháng
   
	// constructor
    public PhieuBaoHanh() { }
    public PhieuBaoHanh(PhieuBaoHanh phieuBaoHanh)
    {
        this.maPhieuBaoHanh = phieuBaoHanh.maPhieuBaoHanh;
        this.thoiGianBaoHanh = phieuBaoHanh.thoiGianBaoHanh;
    }
    public PhieuBaoHanh(String maPhieuBaoHanh, int thoiGianBaoHanh)
    {
        this.maPhieuBaoHanh = maPhieuBaoHanh;
        this.thoiGianBaoHanh = thoiGianBaoHanh;
    }
    
    // getter - setter
    public String getMaPhieuBaoHanh() {
		return maPhieuBaoHanh;
	}
	public void setMaPhieuBaoHanh(String maPhieuBaoHanh) {
		this.maPhieuBaoHanh = maPhieuBaoHanh;
	}
	public int getThoiGianBaoHanh() {
		return thoiGianBaoHanh;
	}
	public void setThoiGianBaoHanh(int thoiGianBaoHanh) {
		this.thoiGianBaoHanh = thoiGianBaoHanh;
	}
}
