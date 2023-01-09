package mypack;

import java.util.ArrayList;
import java.util.List;

public class KhachHang {

	public String maKhachHang;    // primary key    
	public String tenKhachHang;
    public String diaChi;
    public String SDT;      
    public String maLoaiKhachHang;  // foreign key  

    // singular
    public LoaiKhachHang loaiKhachHang;

    // plural
    public List<HoaDonMuaHang> dsHoaDon_KhachHang;

    // constructor 
    public KhachHang() { }
    public KhachHang(KhachHang khachHang)
    {
        this.maKhachHang = khachHang.maKhachHang;
        this.tenKhachHang = khachHang.tenKhachHang;
        this.diaChi = khachHang.diaChi;
        this.SDT = khachHang.SDT;
        this.maLoaiKhachHang = khachHang.maLoaiKhachHang; 
        this.loaiKhachHang = khachHang.loaiKhachHang;
        this.dsHoaDon_KhachHang = khachHang.dsHoaDon_KhachHang;
    }
     public KhachHang (String maKhachHang, String tenKhachHang, String diaChi,
    	String SDT, String maLoaiKhachHang,LoaiKhachHang loaiKhachHang, 
    	ArrayList<HoaDonMuaHang> dsHoaDon_KhachHang)
    {
        this.maKhachHang = maKhachHang;
        this.tenKhachHang = tenKhachHang;
        this.diaChi = diaChi;
        this.SDT = SDT;
        this.maLoaiKhachHang = maLoaiKhachHang; 
        this.loaiKhachHang = loaiKhachHang;
        this.dsHoaDon_KhachHang = dsHoaDon_KhachHang;
    }
     
     // getter - setter
    public String getMaKhachHang() {
 		return maKhachHang;
 	}
 	public void setMaKhachHang(String maKhachHang) {
 		this.maKhachHang = maKhachHang;
 	}
 	public String getTenKhachHang() {
 		return tenKhachHang;
 	}
 	public void setTenKhachHang(String tenKhachHang) {
 		this.tenKhachHang = tenKhachHang;
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
 	public String getMaLoaiKhachHang() {
 		return maLoaiKhachHang;
 	}
 	public void setMaLoaiKhachHang(String maLoaiKhachHang) {
 		this.maLoaiKhachHang = maLoaiKhachHang;
 	}
 	public LoaiKhachHang getLoaiKhachHang() {
 		return loaiKhachHang;
 	}
 	public void setLoaiKhachHang(LoaiKhachHang loaiKhachHang) {
 		this.loaiKhachHang = loaiKhachHang;
 	}
 	public List<HoaDonMuaHang> getDsHoaDon_KhachHang() {
 		return dsHoaDon_KhachHang;
 	}
 	public void setDsHoaDon_KhachHang(List<HoaDonMuaHang> dsHoaDon_KhachHang) {
 		this.dsHoaDon_KhachHang = dsHoaDon_KhachHang;
 	}
}
