# HTML / CSS Report

  > 목표 : HTML 문서에 3 종류의 Chart를 입력해보자.

-----------------------------------------------------------------------

## 사용된 Chart Library

- [Chart.js](https://www.chartjs.org/)

  > Cdn
  
    <!-- chart.js -->
        <script src=https://cdnjs.cloudflare.com/ajax/libs/Chart.js/3.9.1/chart.min.js></script>

  > Canvas
  
    <!-- Canvas -->
      <div>
        <canvas id="myChart2" style="display:inline-block; width:100%; 
                                     max-width:400px; height:100%; max-height:400px"></canvas>
      </div>

  > Chart
  
     <!-- Chart -->
        <script>
          var ctx = document.getElementById('myChart1');
          var xValues = ['HTML','CSS','SASS','Javascript','php','ruby','iOS'];
          var yValues = [30,30,10,20,10,5,5];
          var barColor = ['#ff0000','#ff8c00','#ffff00','#008000','#0000ff','#4b0082','#800080'];
     ...
  
-----------------------------------------------------------------------

## Github.io & Netlify Address

  - Github.io Address : [Click Here](https://racheneken.github.io/Github.io-HTMLreport/)
  
  - Netlify Address : [Click Here](https://htmlreport.netlify.app/)
  
