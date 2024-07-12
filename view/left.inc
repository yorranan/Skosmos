<div class="welcome-box">
  {% if request.lang == 'pt' %}
  <h1>Bem Vindo!</h1>
  <p>A Interface de Publicação de Tesauros do LASeD é um ferramenta de busca de tesauros desenvolvidos pelo grupo de pesquisa LASeD e comunidade</p>
  {% elseif request.lang == 'en' %}
  <h1>Welcome!</h1>
  <p>The LASeD Thesaurus Publishing Interface is a thesaurus search tool developed by the LASeD research group and community</p>
  {% endif %}
</div>
