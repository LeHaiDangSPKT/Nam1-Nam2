using System;
using System.Collections.Generic;
using System.Text;

namespace QuanLySanPham
{
    public abstract class SanPham
    {
        protected string MaSP;
        protected string TenSP;
        protected string Mau;
        protected double GiaCoBan;
        protected double GiaTien;
        public abstract void Nhap();
        public abstract void TinhGiaTien();
        public abstract void Xuat();

        public string Masp
        {
            get { return this.MaSP; }
            set { this.MaSP = value; }
        }
        public string Tensp
        {
            get { return this.TenSP; }
            set { this.TenSP = value; }
        }
        public string mau
        {
            get { return this.Mau; }
            set { this.Mau = value; }
        }
        public double giaCoBan
        {
            get { return this.GiaCoBan; }
            set { this.GiaCoBan = value; }
        }
        public double giaTien
        {
            get { return this.GiaTien; }
            set { this.GiaTien = value; }
        }
        public SanPham()
        {

        }
        public SanPham(string masp, string tensp, string mau, double gia)
        {
            this.MaSP = masp;
            this.TenSP = tensp;
            this.Mau = mau;
            this.GiaCoBan = gia;
        }
        public void Nhap(string masp, string tensp, string mau, double gia)
        {
            this.MaSP = masp;
            this.TenSP = tensp;
            this.Mau = mau;
            this.GiaCoBan = gia;
        }



        ~SanPham()
        { }
    }
}
