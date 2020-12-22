using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace AreaCirculo
{
    public partial class form1 : Form
    {
        public form1()
        {
            InitializeComponent();
        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void label3_Click(object sender, EventArgs e)
        {

        }

        private void label2_Click(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            
        }

        private void btnCalcular_Load(object sender, EventArgs e)
        {
          
        }

        private void txtRaio_TextChanged(object sender, EventArgs e)
        {

        }

        private void txtAltura_TextChanged(object sender, EventArgs e)
        {

        }

        private void lblResultado_Click(object sender, EventArgs e)
        {

        }

        private void btnCalcular_Click(object sender, EventArgs e)
        {
            double raio, altura, area;
            raio = Convert.ToDouble(txtRaio.Text);
            altura = Convert.ToDouble(txtAltura.Text);
            area = 2 * 3.1416 * raio * (raio + altura);
            lblResultado.Text = ("Resultado: " + area);
            txtAltura.Clear();
            txtRaio.Clear();
            txtRaio.Focus();

        }
    }
}
