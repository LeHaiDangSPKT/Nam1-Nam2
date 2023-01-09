package mypack;

public class NoiCungCap {
	
	public String maNoiCungCap;		// primary key
    public String tenNoiCungCap; 
    public String diaChi;
    public String SDT;

    // constructor
    public NoiCungCap() { }
    public NoiCungCap(NoiCungCap ncc)
    {
        this.maNoiCungCap = ncc.maNoiCungCap;
        this.tenNoiCungCap = ncc.tenNoiCungCap;
        this.diaChi = ncc.diaChi;
        this.SDT = ncc.diaChi;
    }
    public NoiCungCap(String maNoiCungCap, String tenNoiCungCap, String diaChi, String SDT)
    {
        this.maNoiCungCap = maNoiCungCap;
        this.tenNoiCungCap = tenNoiCungCap;
        this.diaChi = diaChi;
        this.SDT = diaChi;
    }      
    
    // getter - setter
    public String getMaNoiCungCap() {
    	return maNoiCungCap;
    }
    public void setMaNoiCungCap(String maNoiCungCap) {
    	this.maNoiCungCap = maNoiCungCap;
    }
    public String getTenNoiCungCap() {
		return tenNoiCungCap;
	}
	public void setTenNoiCungCap(String tenNoiCungCap) {
		this.tenNoiCungCap = tenNoiCungCap;
	}
	public String getDiaChi() {
		return diaChi;
	}
	public void setDiaChi(String diaChi) {
		this.diaChi = diaChi;
	}
	public String getSDT () {
		return SDT;
	}
	public void setSDT(String SDT) {
		this.SDT = SDT;
	}
}
