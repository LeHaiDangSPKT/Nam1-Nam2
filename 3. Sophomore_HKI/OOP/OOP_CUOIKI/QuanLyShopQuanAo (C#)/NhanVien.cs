using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace QuanLyShopQuanAo
{
    public class NhanVien
    {
        public string maNhanVien { get; set; }      // primary key
        public string tenNhanVien { get; set; }
        public DateTime ngaySinh { get; set; }
        public string diaChi { get; set; }
        public string SDT { get; set; }
        public int namBatDauLam { get; set; }

        // foreign key
        public string maLoaiNhanVien { get; set; }

        // singular
        public LoaiNhanVien loaiNhanVien { get; set; }

        // constructor
        public NhanVien() { }
        public NhanVien(NhanVien nhanVien)
        {
            this.maNhanVien = nhanVien.maNhanVien;
            this.tenNhanVien = nhanVien.tenNhanVien;
            this.ngaySinh = nhanVien.ngaySinh;
            this.diaChi = nhanVien.diaChi;
            this.SDT = nhanVien.SDT;
            this.namBatDauLam = nhanVien.namBatDauLam;
            this.maLoaiNhanVien = nhanVien.maLoaiNhanVien;
            this.loaiNhanVien = nhanVien.loaiNhanVien;
        }
        public NhanVien(string maNhanVien, string tenNhanVien, DateTime ngaySinh, string diaChi, string SDT, int namBatDauLam,
            string maLoaiNhanVien, LoaiNhanVien loaiNhanVien)
        {
            this.maNhanVien = maNhanVien;
            this.tenNhanVien = tenNhanVien;
            this.ngaySinh = ngaySinh;
            this.diaChi = diaChi;
            this.SDT = SDT;
            this.namBatDauLam = namBatDauLam;
            this.maLoaiNhanVien = maLoaiNhanVien;
            this.loaiNhanVien = loaiNhanVien;
        }
    }
}
