//SITE BY TURMINHA DO DIDI XD

  var flag = 0;
    function loadDoc(a) {

      var bt = "bt" + a;

      const xhttp = new XMLHttpRequest();

      xhttp.onload = function(){
        if (this.responseText == 0){
            document.getElementById(bt).style.backgroundColor = "#04AA6D";
        }
        else{
            document.getElementById(bt).style.backgroundColor = "red";
        }
      }

      xhttp.open("GET", lamp, true);
      xhttp.send();


    }

      // if (flag==0){
      //   document.getElementById("btn1").style.backgroundColor = "red";
      //   flag = 1;
      // } else {
      //  document.getElementById("btn1").style.backgroundColor = "#04AA6D";
      //  flag = 0;
      // }
    