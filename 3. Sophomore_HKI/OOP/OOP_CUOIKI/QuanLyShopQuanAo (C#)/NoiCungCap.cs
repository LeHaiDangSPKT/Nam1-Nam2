using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace QuanLyShopQuanAo
{
    public class NoiCungCap
    {
        public string maNoiCungCap { get; set; }     // primary key
        public string tenNoiCungCap { get; set; }
        public string diaChi { get; set; }
        public string SDT { get; set; }

        // constructor
        public NoiCungCap() { }
        public NoiCungCap(NoiCungCap noiCungCap)
        {
            this.maNoiCungCap = noiCungCap.maNoiCungCap;
            this.tenNoiCungCap = noiCungCap.tenNoiCungCap;
            this.diaChi = noiCungCap.diaChi;
            this.SDT = noiCungCap.diaChi;
        }
        public NoiCungCap(string maNoiCungCap, string tenNoiCungCap, string diaChi, string SDT)
        {
            this.maNoiCungCap = maNoiCungCap;
            this.tenNoiCungCap = tenNoiCungCap;
            this.diaChi = diaChi;
            this.SDT = SDT;
        }           
    }
}
