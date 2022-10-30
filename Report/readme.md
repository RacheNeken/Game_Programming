# HTML / CSS Report

  > 목표 : HTML 문서에 3 종류의 CSS FrameWork를 적용시켜보자.

-----------------------------------------------------------------------

## 사용된 CSS FrameWork

- [Bootstrap](https://getbootstrap.com/)

  > List Up & Group
  
    <!-- bootstrap list -->
            <h2>Contact</h2><hr>
            <ol class="list-group list-group-numbered">
                <li class="list-group-item d-flex justify-content-between align-items-start">
                    <div class="ms-2 me-auto">
            ...
  
- [Materialize](https://materializecss.com/)

  > Truncation
  
    <!-- materialize truncation -->
        <div class="valign-wrapper">
            <h1 class="truncate , grey-text text-darken-2">김준호의 이력서</h1>
        </div>
        ...
  
- [Foundation](https://get.foundation/)

  > Menu
  
    <!-- foundation menu -->
        <section id="menu">
            <b style="font-size:20px;" class="menu-text">Menu</b>
            <ul class="menu align-right">
                <li>
                    <a href="#my_info">Info</a>
                </li>
        ...
  
## 적용된 CSS FrameWork 및 디자인 변경 사항에 따른 CSS & HTML 수정

  > HTML
  
    <h3>음악</h3>
    <p></p>
      <iframe width="100%" height="600"
        src="https://www.youtube.com/embed/7vedHzJu-H0" title="YouTube video player"
        frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media;
        gyroscope; picture-in-picture" allowfullscreen>
      </iframe>
    <br>
    ...
    
  > CSS
  
    .mobile ::before {
    content: url('../images/ico_mobile.png');
    }
    .email ::before {
    content: url('../images/ico_email.png');
    }

## 추가 확인점

  * Bulma FrameWork 사용 시, 다른 FrameWork와 충돌이 있는지 CSS 내부 코드가 정확히 적용이 안됨. 확인 필요.
  * 위의 사항은 쿠키 삭제 및 새로운 버전의 HTML로 인식 시키는 방법 등으로 확인 절차를 했으며,
    추가로 확실히 충돌이 맞는지 확인 작업이 필요함.
  
-----------------------------------------------------------------------

## Github.io & Netlify Address

  - Github.io Address : [Click Here](https://racheneken.github.io/Github.io-HTMLreport/)
  
  - Netlify Address : [Click Here](https://htmlreport.netlify.app/)
  
