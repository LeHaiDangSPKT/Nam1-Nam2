package mypack;

public class ThuongHieu {

	public String maThuongHieu;     // primary key
    public String tenThuongHieu;
    
	// constructor
    public ThuongHieu() { }
    public ThuongHieu(ThuongHieu thuongHieu)
    {
        this.maThuongHieu = thuongHieu.maThuongHieu;
        this.tenThuongHieu = thuongHieu.tenThuongHieu;
    }
    public ThuongHieu(String maThuongHieu, String tenThuongHieu)
    {
        this.maThuongHieu = maThuongHieu;
        this.tenThuongHieu = tenThuongHieu;
    }
    
    // getter - setter
    public String getMaThuongHieu() {
		return maThuongHieu;
	}
	public void setMaThuongHieu(String maThuongHieu) {
		this.maThuongHieu = maThuongHieu;
	}
	public String getTenThuongHieu() {
		return tenThuongHieu;
	}
	public void setTenThuongHieu(String tenThuongHieu) {
		this.tenThuongHieu = tenThuongHieu;
	}
}
