const checkbox = document.querySelector('.my-form input[type="checkbox"]');
const btns = document.querySelectorAll(".my-form button");

checkbox.addEventListener("change", function() {
  const checked = this.checked;
  for (const btn of btns) {
    checked ? (btn.enable = false) : (btn.enable = true);
  }
});

function mostrarMensaje()
{
  let email = document.getElementById("email").value
  let nombre = document.getElementById("nombre").value
  let apellido = document.getElementById("apellido").value
  let tel = document.getElementById("tel").value

  let mensajeAMostrar = "¡Gracias por contactarnos, sus datos fueron guardados con exito!\nSus datos ingresados son:\n" +
                         "Email: " + email + "\n" +
                         "Nombre: " + nombre + "\n" + 
                         "Apellido: " + apellido + "\n" +
                         "Telefono: " + tel;
  alert(mensajeAMostrar);
}
