package mypack;

public class HinhThucThanhToan {

	public String maHinhThucThanhToan;	// primary key   
	public String tenHinhThucThanhToan;
    
    // constructor 
    public HinhThucThanhToan() { }
    public HinhThucThanhToan(HinhThucThanhToan hinhThuc)
    {
        this.maHinhThucThanhToan = hinhThuc.maHinhThucThanhToan;
        this.tenHinhThucThanhToan = hinhThuc.tenHinhThucThanhToan;
    }
    public HinhThucThanhToan(String maHinhThucThanhToan, String tenHinhThucThanhToan)
    {
        this.maHinhThucThanhToan = maHinhThucThanhToan;
        this.tenHinhThucThanhToan = tenHinhThucThanhToan;
    }
    
    // getter - setter
    public String getMaHinhThucThanhToan() {
		return maHinhThucThanhToan;
	}
	public void setMaHinhThucThanhToan(String maHinhThucThanhToan) {
		this.maHinhThucThanhToan = maHinhThucThanhToan;
	}
	public String getTenHinhThucThanhToan() {
		return tenHinhThucThanhToan;
	}
	public void setTenHinhThucThanhToan(String tenHinhThucThanhToan) {
		this.tenHinhThucThanhToan = tenHinhThucThanhToan;
	}
}
