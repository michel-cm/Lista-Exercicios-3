using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace IMC
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void btnCalcular_Click(object sender, EventArgs e)
        {
            double peso, altura,imc;
            peso = Convert.ToDouble (txtPeso.Text);
            altura = Convert.ToDouble(txtAltura.Text);
            imc = peso / (altura * altura);
            if (imc < 20)
                lblResultado.Text = "Abaixo do peso\nSeu IMC:" + imc;
            else
                if(imc>=20 && imc <25)
            {
                lblResultado.Text = "Peso normal\nSeu IMC:" + imc;
            }
            else
                if (imc >= 25 && imc < 30)
                lblResultado.Text = "Sobre peso\nSeu IMC:" + imc;
            else
                if (imc >= 30 && imc < 40)
                lblResultado.Text = "Obeso\nSeu IMC:" + imc;
            else
                lblResultado.Text = "Obeso Mórbido\nSeu IMC:" + imc;
        }
    }
}
