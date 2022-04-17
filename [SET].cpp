[HSET4WQDEFFFF
WEC ]
[WIDOWS3
3EI 
EIRW4223]
[WINDOWS93]
[22D2-23E2-3323-3233]
[;SHART]
[QYWD-WEDD-EWD]
[33DSHDDWG-EWUE-E2eedET]
[当]siedei  
[QW23D-EDE222SETD-3D2EWDDD2
3D9SUH32D2S[EWDF82RWD


]
产品密钥
[12FW-EWSE-ESTU-WEE]
                     [他的所有者]MIEWYFT
                                     [SET]
                                     IP ；[192.168.0.1]
                                     <!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="utf-8" />
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <meta name="google-site-verification" content="hNs7DXrTySP_X-0P_AC0WulAXvUwgSXEmgfcO2r79dw" />

  <!-- Twitter and Facebook OpenGraph Metadata-->
  <meta name="twitter:card" content="summary_large_image" />
  <meta name="twitter:site" content="@code" />

  <meta name="description" content="Visual Studio Code source code support with integrated Git support." />
<meta name="keywords" content="" />
<meta name="ms.prod" content="vs-code" />
<meta name="ms.TOCTitle" content="Version Control" />
<meta name="ms.ContentId" content="7E22CCC0-2AB8-4729-A4C9-BE2B16853820" />
<meta name="ms.date" content="3/30/2022" />
<meta name="ms.topic" content="conceptual" />
<!-- Twitter and Facebook OpenGraph Metadata-->
<meta name="twitter:card" content="summary_large_image" />
<meta property="og:url" content="https://code.visualstudio.com/docs/editor/versioncontrol" />
<meta property="og:type" content="article" />
<meta property="og:title" content="Version Control in Visual Studio Code" />
<meta property="og:description" content="Visual Studio Code source code support with integrated Git support." />

<meta property="og:image" content="https://code.visualstudio.com/opengraphimg/opengraph-docs.png" />



  <link rel="shortcut icon" href="/favicon.ico" sizes="128x128" />
  <link rel="apple-touch-icon" href="/apple-touch-icon.png">

  <title>Version Control in Visual Studio Code</title>

  <link rel="stylesheet" href="/vendor/bootstrap/css/bootstrap.min.css">
  <link rel="stylesheet" href="/dist/style.css">

  <script src="https://js.monitor.azure.com/scripts/c/ms.jsll-3.min.js" type="text/javascript"></script>
  <script type="text/javascript">
    var config = {
      coreData: {
        appId: "vscode"
      },
      instrumentationKey: "1a3eb3104447440391ad5f2a6ee06a0a-62879566-bc58-4741-9650-302bf2af703f-7103",
      webAnalyticsConfiguration: {
        urlCollectQuery: true
      }
  
    };
     (window.awa) {
      awa.init(config);
    }
  </script>
  
  <link rel="dns-prefetch" href="//target.microsoft.com">
  <link rel="dns-prefetch" href="//microsoftmscompoc.tt.omtrdc.net">
  <script>
  var at_property = 'a7e3965e-a530-9aab-41f3-2145f10bc083';
  </script>
  <script src="/vendor/at/at-config.js" type="text/javascript"></script>
  <script src="/vendor/at/at.js" type="text/javascript"></script>
  
  <script>
  (function(i,s,o,g,r,a,m){i['GoogleAnalyticsObject']=r;i[r]=i[r]||function(){
  (i[r].q=i[r].q||[]).push(arguments)},i[r].l=1*new Date();a=s.createElement(o),
  m=s.getElementsByTagName(o)[0];a.async=1;a.src=g;m.parentNode.insertBefore(a,m)
  })(window,document,'script','//www.google-analytics.com/analytics.js','ga');
  </script>  
  <link rel="alternate" type="application/atom+xml" title="RSS Feed for code.visualstudio.com" href="/feed.xml" />
</head>

<body>
  <!-- EU Cookie Compliance JS -->
  <script src="https://wcpstatic.microsoft.com/mscc/lib/v2/wcp-consent.js"></script>

  <div id="main">
          <div class="navbar-fixed-container">
              <div class="navbar navbar-inverse navbar-fixed-top ">
                  <div id='cookie-banner'></div>        <nav role="navigation" aria-label="Top Level">
                      <div class="container">
                          <div class="nav navbar-header">
                              <a role="button" id="skip-to-content" class="link-button" href="#main-content">Skip to content<i>&nbs/i><span class="glyphicon glyphicon-menu-down"></span></a>
                              <a class="navbar-brand" href="/">Visual Studio Code</a>
                              <button type="button" class="navbar-toggle" role="navigation" data-toggle="collapse" data-target=".navbar-collapse" aria-label="Toggle Navigation Menu">
                                  <span class="icon-bar"></span>
                                  <span class="icon-bar"></span>
                                  <span class="icon-bar"></span>
                              </button>
                          </div>
                          <div class="navbar-collapse collapse" role="navigation">
                              <ul class="nav navbar-nav navbar-left">
                                  <li class="active" ><a id="nav-docs" href="/docs">Docs</a></li>
                                  <li ><a id="nav-updates" href="/updates">Updates</a></li>
                                  <li ><a id="nav-blogs" href="/blogs">Blog</a></li>
                                  <li ><a id="nav-extend" href="/api">API</a></li>
                                  <li><a href="https://marketplace.visualstudio.com/VSCode" target="_blank" id="nav-extensions">Extensions</a></li>
                                  <li ><a id="nav-faqs" href="/docs/supporting/faq">FAQ</a></li>
                                  <li ><a id="nav-learn" href="/learn">Learn</a></li>
                                  <li class='search visible-xs visible-sm'
                                      ><a href="/Search">Search</a></li>
                              </ul>
          
                              <ul class="nav navbar-nav navbar-right" role="presentation">
                                  <!-- Floating search icon -->
                                  <li>
                                      <a href="/Search" title="Search" class="btn search-btn" id="nav-search">
                                          <img class="search-icon" src="/assets/icons/search.svg" width="16px" height="16px" alt="Search"/>
                                          <img class="search-icon-inverted" src="/assets/icons/search_dark.svg" width="16px" height="16px" alt="Search" />
                                      </a>
                                  </li>
                                  <!-- Actual search icon -->
                                  <li class="search" role="presentation">
                                      <form class="nav-search search-form" role="search" aria-label="Search">
                                          <div class="input-group" role="presentation">
                                              <input type="text" name="q" class="search-box form-control" placeholder="Search Docs" aria-label="Search text"/>
                                              <span class="input-group-btn">
                                                  <button tabindex="0" class="btn" type="submit" aria-label="Search">
                                                          <img class="search-icon" src="/assets/icons/search.svg" width="16px" height="16px" alt="Search" />
                                                          <img class="search-icon-inverted" src="/assets/icons/search_dark.svg" width="16px" height="16px" alt="Search" />
                                                  </button>
                                              </span>
                                          </div>
                                      </form>                        </li>
                                  <!-- this was hiden in the home and download page, keeping it for now -->
                                  <li><a class="link-button" href="/Download" id="nav-download">
                                      <img class="download-icon" src="/assets/icons/download.svg" width="16px" height="16px" alt="Download VS Code"/>
                                      <img class="download-icon-inverted" src="/assets/icons/download-black.svg" width="16px" height="16px" alt="Download VS Code" />
                                      <span>Download</span>
                                  </a></li>
                              </ul>
                          </div>
                      </div>
                  </nav>
              </div>
          </div>          <div class="updates-banner  ">
              <div class="container">
                  <p class="message"><a href="/updates" id="banner-link-updates">Version 1.66</a> is now available! Read about the new features and fixes from March.</p> 
              </div>
              <div tabindex="0" role="button" title="Dismiss this update" class="dismiss-btn" id="banner-dismiss-btn"><span class="sr-only">Dismiss this update</span><span aria-hidden="true" class="glyph-icon"></span></div>
          </div>      <div role="main" id="main-content">
        <script>
    function closeReportIssue() {
        var element = document.getElementById('surveypopup');
        element.parentElement.removeChild(element);
    }

    function reportIssue(tutorial, page) {
        var div = document.createElement('div');
        div.innerHTML = '<div id="surveypopup" class="overlay visible"><div class="surveypopup"><div id="surveytitle">Tell us more<a href="javascript:void(0)" onclick="closeReportIssue()">X</a></div><div id="surveydiv"><iframe frameBorder="0" scrolling="0" src="https://www.research.net/r/PWZWZ52?tutorial=' + tutorial + '&step=' + page + '"></iframe></div></div></div>';
        document.body.appendChild(div.children[0]);
    }

    function pushCodingPackEvent(language, os) {
        let id = `${language}-${os}-coding-pack`;
        var analytics = window.vscodeAnalytics;

        analytics && analytics.event(
            'click',
            'download',
            id,
        );
    }
</script>

<div class="container body-content docs">
    <div class="row">
        <div class="col-md-2 docs-navbar-container">
            <nav id="docs-navbar" aria-label="Topics" class="docs-nav visible-md visible-lg">
            	<ul class="nav" id="main-nav">
            		<li >
            			<a class="docs-home" href="/docs" >Overview</a>
            		</li>
            		
            			
            		
            			
            				<li class="panel collapsed">
            					<a class="area" role="button" href="#setup-articles" data-parent="#main-nav" data-toggle="collapse">Setup</a>
            					<ul id="setup-articles" class="collapse ">
            					
            						<li >
            							<a href="/docs/setup/setup-overview" >Overview</a>
            						</li>
            					
            						<li >
            							<a href="/docs/setup/linux" >Linux</a>
            						</li>
            					
            						<li >
            							<a href="/docs/setup/mac" >macOS</a>
            						</li>
            					
            						<li >
            							<a href="/docs/setup/windows" >Windows</a>
            						</li>
            					
            						<li >
            							<a href="/docs/setup/raspberry-pi" >Raspberry Pi</a>
            						</li>
            					
            						<li >
            							<a href="/docs/setup/network" >Network</a>
            						</li>
            					
            						<li >
            							<a href="/docs/setup/additional-components" >Additional Components</a>
            						</li>
            					
            						<li >
            							<a href="/docs/setup/uninstall" >Uninstall</a>
            						</li>
            					
            					</ul>
            				</li>
            			
            		
            			
            				<li class="panel collapsed">
            					<a class="area" role="button" href="#getstarted-articles" data-parent="#main-nav" data-toggle="collapse">Get Started</a>
            					<ul id="getstarted-articles" class="collapse ">
            					
            						<li >
            							<a href="/docs/getstarted/introvideos" >Intro Videos</a>
            						</li>
            					
            						<li >
            							<a href="/docs/getstarted/tips-and-tricks" >Tips and Tricks</a>
            						</li>
            					
            						<li >
            							<a href="/docs/getstarted/userinterface" >User Interface</a>
            						</li>
            					
            						<li >
            							<a href="/docs/getstarted/themes" >Themes</a>
            						</li>
            					
            						<li >
            							<a href="/docs/getstarted/settings" >Settings</a>
            						</li>
            					
            						<li >
            							<a href="/docs/getstarted/keybindings" >Key Bindings</a>
            						</li>
            					
            						<li >
            							<a href="/docs/getstarted/locales" >Display Language</a>
            						</li>
            					
            						<li >
            							<a href="/docs/getstarted/telemetry" >Telemetry</a>
            						</li>
            					
            					</ul>
            				</li>
            			
            		
            			
            				<li class="panel active expanded">
            					<a class="area" role="button" href="#editor-articles" data-parent="#main-nav" data-toggle="collapse">User Guide</a>
            					<ul id="editor-articles" class="collapse in">
            					
            						<li >
            							<a href="/docs/editor/codebasics" >Basic Editing</a>
            						</li>
            					
            						<li >
            							<a href="/docs/editor/extension-marketplace" >Extension Marketplace</a>
            						</li>
            					
            						<li >
            							<a href="/docs/editor/intellisense" >IntelliSense</a>
            						</li>
            					
            						<li >
            							<a href="/docs/editor/editingevolved" >Code Navigation</a>
            						</li>
            					
            						<li >
            							<a href="/docs/editor/refactoring" >Refactoring</a>
            						</li>
            					
            						<li >
            							<a href="/docs/editor/debugging" >Debugging</a>
            						</li>
            					
            						<li class="active">
            							<a href="/docs/editor/versioncontrol" aria-label="Current Page: Version Control">Version Control</a>
            						</li>
            					
            						<li >
            							<a href="/docs/editor/github" >Working with GitHub</a>
            						</li>
            					
            						<li >
            							<a href="/docs/editor/vscode-web" >VS Code for the Web</a>
            						</li>
            					
            						<li >
            							<a href="/docs/editor/integrated-terminal" >Integrated Terminal</a>
            						</li>
            					
            						<li >
            							<a href="/docs/editor/tasks" >Tasks</a>
            						</li>
            					
            						<li >
            							<a href="/docs/editor/settings-sync" >Settings Sync</a>
            						</li>
            					
            						<li >
            							<a href="/docs/editor/userdefinedsnippets" >Snippets</a>
            						</li>
            					
            						<li >
            							<a href="/docs/editor/emmet" >Emmet</a>
            						</li>
            					
            						<li >
            							<a href="/docs/editor/command-line" >Command Line</a>
            						</li>
            					
            						<li >
            							<a href="/docs/editor/workspace-trust" >Workspace Trust</a>
            						</li>
            					
            						<li >
            							<a href="/docs/editor/multi-root-workspaces" >Multi-root Workspaces</a>
            						</li>
            					
            						<li >
            							<a href="/docs/editor/accessibility" >Accessibility</a>
            						</li>
            					
            					</ul>
            				</li>
            			
            		
            			
            				<li class="panel collapsed">
            					<a class="area" role="button" href="#languages-articles" data-parent="#main-nav" data-toggle="collapse">Languages</a>
            					<ul id="languages-articles" class="collapse ">
            					
            						<li >
            							<a href="/docs/languages/overview" >Overview</a>
            						</li>
            					
            						<li >
            							<a href="/docs/languages/javascript" >JavaScript</a>
            						</li>
            					
            						<li >
            							<a href="/docs/languages/json" >JSON</a>
            						</li>
            					
            						<li >
            							<a href="/docs/languages/html" >HTML</a>
            						</li>
            					
            						<li >
            							<a href="/docs/languages/css" >CSS, SCSS and Less</a>
            						</li>
            					
            						<li >
            							<a href="/docs/languages/typescript" >TypeScript</a>
            						</li>
            					
            						<li >
            							<a href="/docs/languages/markdown" >Markdown</a>
            						</li>
            					
            						<li >
            							<a href="/docs/languages/powershell" >PowerShell</a>
            						</li>
            					
            						<li >
            							<a href="/docs/languages/cpp" >C++</a>
            						</li>
            					
            						<li >
            							<a href="/docs/languages/java" >Java</a>
            						</li>
            					
            						<li >
            							<a href="/docs/languages/php" >PHP</a>
            						</li>
            					
            						<li >
            							<a href="/docs/languages/python" >Python</a>
            						</li>
            					
            						<li >
            							<a href="/docs/languages/julia" >Julia</a>
            						</li>
            					
            						<li >
            							<a href="/docs/languages/r" >R</a>
            						</li>
            					
            						<li >
            							<a href="/docs/languages/go" >Go</a>
            						</li>
            					
            						<li >
            							<a href="/docs/languages/tsql" >T-SQL</a>
            						</li>
            					
            						<li >
            							<a href="/docs/languages/csharp" >C#</a>
            						</li>
            					
            						<li >
            							<a href="/docs/languages/dotnet" >.NET Core</a>
            						</li>
            					
            					</ul>
            				</li>
            			
            		
            			
            				<li class="panel collapsed">
            					<a class="area" role="button" href="#nodejs-articles" data-parent="#main-nav" data-toggle="collapse">Node.js / JavaScript</a>
            					<ul id="nodejs-articles" class="collapse ">
            					
            						<li >
            							<a href="/docs/nodejs/working-with-javascript" >Working with JavaScript</a>
            						</li>
            					
            						<li >
            							<a href="/docs/nodejs/nodejs-tutorial" >Node.js Tutorial</a>
            						</li>
            					
            						<li >
            							<a href="/docs/nodejs/nodejs-debugging" >Node.js Debugging</a>
            						</li>
            					
            						<li >
            							<a href="/docs/nodejs/nodejs-deployment" >Node.js Deployment</a>
            						</li>
            					
            						<li >
            							<a href="/docs/nodejs/browser-debugging" >Browser Debugging</a>
            						</li>
            					
            						<li >
            							<a href="/docs/nodejs/angular-tutorial" >Angular Tutorial</a>
            						</li>
            					
            						<li >
            							<a href="/docs/nodejs/reactjs-tutorial" >React Tutorial</a>
            						</li>
            					
            						<li >
            							<a href="/docs/nodejs/vuejs-tutorial" >Vue Tutorial</a>
            						</li>
            					
            						<li >
            							<a href="/docs/nodejs/emberjs-tutorial" >Ember Tutorial</a>
            						</li>
            					
            						<li >
            							<a href="/docs/nodejs/debugging-recipes" >Debugging Recipes</a>
            						</li>
            					
            						<li >
            							<a href="/docs/nodejs/extensions" >Extensions</a>
            						</li>
            					
            					</ul>
            				</li>
            			
            		
            			
            				<li class="panel collapsed">
            					<a class="area" role="button" href="#typescript-articles" data-parent="#main-nav" data-toggle="collapse">TypeScript</a>
            					<ul id="typescript-articles" class="collapse ">
            					
            						<li >
            							<a href="/docs/typescript/typescript-tutorial" >Tutorial</a>
            						</li>
            					
            						<li >
            							<a href="/docs/typescript/typescript-compiling" >Compiling</a>
            						</li>
            					
            						<li >
            							<a href="/docs/typescript/typescript-debugging" >Debugging</a>
            						</li>
            					
            					</ul>
            				</li>
            			
            		
            			
            				<li class="panel collapsed">
            					<a class="area" role="button" href="#python-articles" data-parent="#main-nav" data-toggle="collapse">Python</a>
            					<ul id="python-articles" class="collapse ">
            					
            						<li >
            							<a href="/docs/python/python-tutorial" >Tutorial</a>
            						</li>
            					
            						<li >
            							<a href="/docs/python/editing" >Editing Code</a>
            						</li>
            					
            						<li >
            							<a href="/docs/python/linting" >Linting</a>
            						</li>
            					
            						<li >
            							<a href="/docs/python/debugging" >Debugging</a>
            						</li>
            					
            						<li >
            							<a href="/docs/python/environments" >Environments</a>
            						</li>
            					
            						<li >
            							<a href="/docs/python/testing" >Testing</a>
            						</li>
            					
            						<li >
            							<a href="/docs/python/data-science" >Data Science</a>
            						</li>
            					
            						<li >
            							<a href="/docs/python/jupyter-support-py" >Python Interactive</a>
            						</li>
            					
            						<li >
            							<a href="/docs/python/tutorial-django" >Django Tutorial</a>
            						</li>
            					
            						<li >
            							<a href="/docs/python/tutorial-flask" >Flask Tutorial</a>
            						</li>
            					
            						<li >
            							<a href="/docs/python/tutorial-create-containers" >Create containers</a>
            						</li>
            					
            						<li >
            							<a href="/docs/python/python-on-azure" >Python on Azure</a>
            						</li>
            					
            						<li >
            							<a href="/docs/python/settings-reference" >Settings Reference</a>
            						</li>
            					
            					</ul>
            				</li>
            			
            		
            			
            				<li class="panel collapsed">
            					<a class="area" role="button" href="#java-articles" data-parent="#main-nav" data-toggle="collapse">Java</a>
            					<ul id="java-articles" class="collapse ">
            					
            						<li >
            							<a href="/docs/java/java-tutorial" >Getting Started</a>
            						</li>
            					
            						<li >
            							<a href="/docs/java/java-editing" >Navigate and Edit</a>
            						</li>
            					
            						<li >
            							<a href="/docs/java/java-refactoring" >Refactoring</a>
            						</li>
            					
            						<li >
            							<a href="/docs/java/java-linting" >Formatting and Linting</a>
            						</li>
            					
            						<li >
            							<a href="/docs/java/java-project" >Project Management</a>
            						</li>
            					
            						<li >
            							<a href="/docs/java/java-build" >Build Tools</a>
            						</li>
            					
            						<li >
            							<a href="/docs/java/java-debugging" >Run and Debug</a>
            						</li>
            					
            						<li >
            							<a href="/docs/java/java-testing" >Testing</a>
            						</li>
            					
            						<li >
            							<a href="/docs/java/java-spring-boot" >Spring Boot</a>
            						</li>
            					
            						<li >
            							<a href="/docs/java/java-tomcat-jetty" >Application Servers</a>
            						</li>
            					
            						<li >
            							<a href="/docs/java/java-on-azure" >Java on Azure</a>
            						</li>
            					
            						<li >
            							<a href="/docs/java/java-gui" >GUI Applications</a>
            						</li>
            					
            						<li >
            							<a href="/docs/java/extensions" >Extensions</a>
            						</li>
            					
            						<li >
            							<a href="/docs/java/java-faq" >FAQ</a>
            						</li>
            					
            					</ul>
            				</li>
            			
            		
            			
            				<li class="panel collapsed">
            					<a class="area" role="button" href="#cpp-articles" data-parent="#main-nav" data-toggle="collapse">C++</a>
            					<ul id="cpp-articles" class="collapse ">
            					
            						<li >
            							<a href="/docs/cpp/introvideos-cpp" >Intro Videos</a>
            						</li>
            					
            						<li >
            							<a href="/docs/cpp/config-linux" >GCC on Linux</a>
            						</li>
            					
            						<li >
            							<a href="/docs/cpp/config-mingw" >GCC on Windows</a>
            						</li>
            					
            						<li >
            							<a href="/docs/cpp/config-wsl" >GCC on Windows Subsystem for Linux</a>
            						</li>
            					
            						<li >
            							<a href="/docs/cpp/config-clang-mac" >Clang on macOS</a>
            						</li>
            					
            						<li >
            							<a href="/docs/cpp/config-msvc" >Microsoft C++ on Windows</a>
            						</li>
            					
            						<li >
            							<a href="/docs/cpp/build-with-cmake" >Build with CMake</a>
            						</li>
            					
            						<li >
            							<a href="/docs/cpp/cmake-linux" >CMake Tools on Linux</a>
            						</li>
            					
            						<li >
            							<a href="/docs/cpp/cpp-debug" >Debugging</a>
            						</li>
            					
            						<li >
            							<a href="/docs/cpp/cpp-ide" >Editing</a>
            						</li>
            					
            						<li >
            							<a href="/docs/cpp/customize-default-settings-cpp" >Settings</a>
            						</li>
            					
            						<li >
            							<a href="/docs/cpp/configure-intellisense-crosscompilation" >Configure IntelliSense for cross-compiling</a>
            						</li>
            					
            						<li >
            							<a href="/docs/cpp/faq-cpp" >FAQ</a>
            						</li>
            					
            					</ul>
            				</li>
            			
            		
            			
            				<li class="panel collapsed">
            					<a class="area" role="button" href="#containers-articles" data-parent="#main-nav" data-toggle="collapse">Containers</a>
            					<ul id="containers-articles" class="collapse ">
            					
            						<li >
            							<a href="/docs/containers/overview" >Overview</a>
            						</li>
            					
            						<li >
            							<a href="/docs/containers/quickstart-node" >Node.js</a>
            						</li>
            					
            						<li >
            							<a href="/docs/containers/quickstart-python" >Python</a>
            						</li>
            					
            						<li >
            							<a href="/docs/containers/quickstart-aspnet-core" >ASP.NET Core</a>
            						</li>
            					
            						<li >
            							<a href="/docs/containers/debug-common" >Debug</a>
            						</li>
            					
            						<li >
            							<a href="/docs/containers/docker-compose" >Docker Compose</a>
            						</li>
            					
            						<li >
            							<a href="/docs/containers/quickstart-container-registries" >Registries</a>
            						</li>
            					
            						<li >
            							<a href="/docs/containers/app-service" >Deploy to Azure</a>
            						</li>
            					
            						<li >
            							<a href="/docs/containers/choosing-dev-environment" >Choose a dev environment</a>
            						</li>
            					
            						<li >
            							<a href="/docs/containers/reference" >Customize</a>
            						</li>
            					
            						<li >
            							<a href="/docs/containers/bridge-to-kubernetes" >Develop with Kubernetes</a>
            						</li>
            					
            						<li >
            							<a href="/docs/containers/troubleshooting" >Tips and Tricks</a>
            						</li>
            					
            					</ul>
            				</li>
            			
            		
            			
            				<li class="panel collapsed">
            					<a class="area" role="button" href="#datascience-articles" data-parent="#main-nav" data-toggle="collapse">Data Science</a>
            					<ul id="datascience-articles" class="collapse ">
            					
            						<li >
            							<a href="/docs/datascience/overview" >Overview</a>
            						</li>
            					
            						<li >
            							<a href="/docs/datascience/jupyter-notebooks" >Jupyter Notebooks</a>
            						</li>
            					
            						<li >
            							<a href="/docs/datascience/data-science-tutorial" >Data Science Tutorial</a>
            						</li>
            					
            						<li >
            							<a href="/docs/datascience/python-interactive" >Python Interactive</a>
            						</li>
            					
            						<li >
            							<a href="/docs/datascience/pytorch-support" >PyTorch Support</a>
            						</li>
            					
            						<li >
            							<a href="/docs/datascience/azure-machine-learning" >Azure Machine Learning</a>
            						</li>
            					
            					</ul>
            				</li>
            			
            		
            			
            				<li class="panel collapsed">
            					<a class="area" role="button" href="#azure-articles" data-parent="#main-nav" data-toggle="collapse">Azure</a>
            					<ul id="azure-articles" class="collapse ">
            					
            						<li >
            							<a href="/docs/azure/extensions" >Extensions</a>
            						</li>
            					
            						<li >
            							<a href="/docs/azure/deployment" >Deployment</a>
            						</li>
            					
            						<li >
            							<a href="/docs/azure/remote-debugging" >Remote Debugging for Node.js</a>
            						</li>
            					
            						<li >
            							<a href="/docs/azure/docker" >Docker</a>
            						</li>
            					
            						<li >
            							<a href="/docs/azure/mongodb" >MongoDB</a>
            						</li>
            					
            						<li >
            							<a href="/docs/azure/kubernetes" >Kubernetes</a>
            						</li>
            					
            					</ul>
            				</li>
            			
            		
            			
            				<li class="panel collapsed">
            					<a class="area" role="button" href="#remote-articles" data-parent="#main-nav" data-toggle="collapse">Remote</a>
            					<ul id="remote-articles" class="collapse ">
            					
            						<li >
            							<a href="/docs/remote/remote-overview" >Overview</a>
            						</li>
            					
            						<li >
            							<a href="/docs/remote/ssh" >SSH</a>
            						</li>
            					
            						<li >
            							<a href="/docs/remote/containers" >Containers</a>
            						</li>
            					
            						<li >
            							<a href="/docs/remote/wsl" >Windows Subsystem for Linux</a>
            						</li>
            					
            						<li >
            							<a href="/docs/remote/codespaces" >GitHub Codespaces</a>
            						</li>
            					
            						<li >
            							<a href="/docs/remote/ssh-tutorial" >SSH Tutorial</a>
            						</li>
            					
            						<li >
            							<a href="/docs/remote/containers-tutorial" >Containers Tutorial</a>
            						</li>
            					
            						<li >
            							<a href="/docs/remote/wsl-tutorial" >WSL Tutorial</a>
            						</li>
            					
            						<li >
            							<a href="/docs/remote/attach-container" >Attach to Container</a>
            						</li>
            					
            						<li >
            							<a href="/docs/remote/create-dev-container" >Create a Dev Container</a>
            						</li>
            					
            						<li >
            							<a href="/docs/remote/containers-advanced" >Advanced Containers</a>
            						</li>
            					
            						<li >
            							<a href="/docs/remote/devcontainer-cli" >devcontainer CLI</a>
            						</li>
            					
            						<li >
            							<a href="/docs/remote/devcontainerjson-reference" >devcontainer.json</a>
            						</li>
            					
            						<li >
            							<a href="/docs/remote/troubleshooting" >Tips and Tricks</a>
            						</li>
            					
            						<li >
            							<a href="/docs/remote/faq" >FAQ</a>
            						</li>
            					
            					</ul>
            				</li>
            			
            		
            			
            		
            	</ul>
            </nav>
            <nav id="small-nav" aria-label="Topics" class="docs-nav hidden-md hidden-lg">
            	<h4>Topics</h4>
            	<select id="small-nav-dropdown">
            		<option value="/docs" >Overview</option>
            		
            			
            		
            			
            				<optgroup label="Setup">
            				
            					<option value="/docs/setup/setup-overview" >Overview</option>
            				
            					<option value="/docs/setup/linux" >Linux</option>
            				
            					<option value="/docs/setup/mac" >macOS</option>
            				
            					<option value="/docs/setup/windows" >Windows</option>
            				
            					<option value="/docs/setup/raspberry-pi" >Raspberry Pi</option>
            				
            					<option value="/docs/setup/network" >Network</option>
            				
            					<option value="/docs/setup/additional-components" >Additional Components</option>
            				
            					<option value="/docs/setup/uninstall" >Uninstall</option>
            				
            				</optgroup>
            			
            		
            			
            				<optgroup label="Get Started">
            				
            					<option value="/docs/getstarted/introvideos" >Intro Videos</option>
            				
            					<option value="/docs/getstarted/tips-and-tricks" >Tips and Tricks</option>
            				
            					<option value="/docs/getstarted/userinterface" >User Interface</option>
            				
            					<option value="/docs/getstarted/themes" >Themes</option>
            				
            					<option value="/docs/getstarted/settings" >Settings</option>
            				
            					<option value="/docs/getstarted/keybindings" >Key Bindings</option>
            				
            					<option value="/docs/getstarted/locales" >Display Language</option>
            				
            					<option value="/docs/getstarted/telemetry" >Telemetry</option>
            				
            				</optgroup>
            			
            		
            			
            				<optgroup label="User Guide">
            				
            					<option value="/docs/editor/codebasics" >Basic Editing</option>
            				
            					<option value="/docs/editor/extension-marketplace" >Extension Marketplace</option>
            				
            					<option value="/docs/editor/intellisense" >IntelliSense</option>
            				
            					<option value="/docs/editor/editingevolved" >Code Navigation</option>
            				
            					<option value="/docs/editor/refactoring" >Refactoring</option>
            				
            					<option value="/docs/editor/debugging" >Debugging</option>
            				
            					<option value="/docs/editor/versioncontrol" selected>Version Control</option>
            				
            					<option value="/docs/editor/github" >Working with GitHub</option>
            				
            					<option value="/docs/editor/vscode-web" >VS Code for the Web</option>
            				
            					<option value="/docs/editor/integrated-terminal" >Integrated Terminal</option>
            				
            					<option value="/docs/editor/tasks" >Tasks</option>
            				
            					<option value="/docs/editor/settings-sync" >Settings Sync</option>
            				
            					<option value="/docs/editor/userdefinedsnippets" >Snippets</option>
            				
            					<option value="/docs/editor/emmet" >Emmet</option>
            				
            					<option value="/docs/editor/command-line" >Command Line</option>
            				
            					<option value="/docs/editor/workspace-trust" >Workspace Trust</option>
            				
            					<option value="/docs/editor/multi-root-workspaces" >Multi-root Workspaces</option>
            				
            					<option value="/docs/editor/accessibility" >Accessibility</option>
            				
            				</optgroup>
            			
            		
            			
            				<optgroup label="Languages">
            				
            					<option value="/docs/languages/overview" >Overview</option>
            				
            					<option value="/docs/languages/javascript" >JavaScript</option>
            				
            					<option value="/docs/languages/json" >JSON</option>
            				
            					<option value="/docs/languages/html" >HTML</option>
            				
            					<option value="/docs/languages/css" >CSS, SCSS and Less</option>
            				
            					<option value="/docs/languages/typescript" >TypeScript</option>
            				
            					<option value="/docs/languages/markdown" >Markdown</option>
            				
            					<option value="/docs/languages/powershell" >PowerShell</option>
            				
            					<option value="/docs/languages/cpp" >C++</option>
            				
            					<option value="/docs/languages/java" >Java</option>
            				
            					<option value="/docs/languages/php" >PHP</option>
            				
            					<option value="/docs/languages/python" >Python</option>
            				
            					<option value="/docs/languages/julia" >Julia</option>
            				
            					<option value="/docs/languages/r" >R</option>
            				
            					<option value="/docs/languages/go" >Go</option>
            				
            					<option value="/docs/languages/tsql" >T-SQL</option>
            				
            					<option value="/docs/languages/csharp" >C#</option>
            				
            					<option value="/docs/languages/dotnet" >.NET Core</option>
            				
            				</optgroup>
            			
            		
            			
            				<optgroup label="Node.js / JavaScript">
            				
            					<option value="/docs/nodejs/working-with-javascript" >Working with JavaScript</option>
            				
            					<option value="/docs/nodejs/nodejs-tutorial" >Node.js Tutorial</option>
            				
            					<option value="/docs/nodejs/nodejs-debugging" >Node.js Debugging</option>
            				
            					<option value="/docs/nodejs/nodejs-deployment" >Node.js Deployment</option>
            				
            					<option value="/docs/nodejs/browser-debugging" >Browser Debugging</option>
            				
            					<option value="/docs/nodejs/angular-tutorial" >Angular Tutorial</option>
            				
            					<option value="/docs/nodejs/reactjs-tutorial" >React Tutorial</option>
            				
            					<option value="/docs/nodejs/vuejs-tutorial" >Vue Tutorial</option>
            				
            					<option value="/docs/nodejs/emberjs-tutorial" >Ember Tutorial</option>
            				
            					<option value="/docs/nodejs/debugging-recipes" >Debugging Recipes</option>
            				
            					<option value="/docs/nodejs/extensions" >Extensions</option>
            				
            				</optgroup>
            			
            		
            			
            				<optgroup label="TypeScript">
            				
            					<option value="/docs/typescript/typescript-tutorial" >Tutorial</option>
            				
            					<option value="/docs/typescript/typescript-compiling" >Compiling</option>
            				
            					<option value="/docs/typescript/typescript-debugging" >Debugging</option>
            				
            				</optgroup>
            			
            		
            			
            				<optgroup label="Python">
            				
            					<option value="/docs/python/python-tutorial" >Tutorial</option>
            				
            					<option value="/docs/python/editing" >Editing Code</option>
            				
            					<option value="/docs/python/linting" >Linting</option>
            				
            					<option value="/docs/python/debugging" >Debugging</option>
            				
            					<option value="/docs/python/environments" >Environments</option>
            				
            					<option value="/docs/python/testing" >Testing</option>
            				
            					<option value="/docs/python/data-science" >Data Science</option>
            				
            					<option value="/docs/python/jupyter-support-py" >Python Interactive</option>
            				
            					<option value="/docs/python/tutorial-django" >Django Tutorial</option>
            				
            					<option value="/docs/python/tutorial-flask" >Flask Tutorial</option>
            				
            					<option value="/docs/python/tutorial-create-containers" >Create containers</option>
            				
            					<option value="/docs/python/python-on-azure" >Python on Azure</option>
            				
            					<option value="/docs/python/settings-reference" >Settings Reference</option>
            				
            				</optgroup>
            			
            		
            			
            				<optgroup label="Java">
            				
            					<option value="/docs/java/java-tutorial" >Getting Started</option>
            				
            					<option value="/docs/java/java-editing" >Navigate and Edit</option>
            				
            					<option value="/docs/java/java-refactoring" >Refactoring</option>
            				
            					<option value="/docs/java/java-linting" >Formatting and Linting</option>
            				
            					<option value="/docs/java/java-project" >Project Management</option>
            				
            					<option value="/docs/java/java-build" >Build Tools</option>
            				
            					<option value="/docs/java/java-debugging" >Run and Debug</option>
            				
            					<option value="/docs/java/java-testing" >Testing</option>
            				
            					<option value="/docs/java/java-spring-boot" >Spring Boot</option>
            				
            					<option value="/docs/java/java-tomcat-jetty" >Application Servers</option>
            				
            					<option value="/docs/java/java-on-azure" >Java on Azure</option>
            				
            					<option value="/docs/java/java-gui" >GUI Applications</option>
            				
            					<option value="/docs/java/extensions" >Extensions</option>
            				
            					<option value="/docs/java/java-faq" >FAQ</option>
            				
            				</optgroup>
            			
            		
            			
            				<optgroup label="C++">
            				
            					<option value="/docs/cpp/introvideos-cpp" >Intro Videos</option>
            				
            					<option value="/docs/cpp/config-linux" >GCC on Linux</option>
            				
            					<option value="/docs/cpp/config-mingw" >GCC on Windows</option>
            				
            					<option value="/docs/cpp/config-wsl" >GCC on Windows Subsystem for Linux</option>
            				
            					<option value="/docs/cpp/config-clang-mac" >Clang on macOS</option>
            				
            					<option value="/docs/cpp/config-msvc" >Microsoft C++ on Windows</option>
            				
            					<option value="/docs/cpp/build-with-cmake" >Build with CMake</option>
            				
            					<option value="/docs/cpp/cmake-linux" >CMake Tools on Linux</option>
            				
            					<option value="/docs/cpp/cpp-debug" >Debugging</option>
            				
            					<option value="/docs/cpp/cpp-ide" >Editing</option>
            				
            					<option value="/docs/cpp/customize-default-settings-cpp" >Settings</option>
            				
            					<option value="/docs/cpp/configure-intellisense-crosscompilation" >Configure IntelliSense for cross-compiling</option>
            				
            					<option value="/docs/cpp/faq-cpp" >FAQ</option>
            				
            				</optgroup>
            			
            		
            			
            				<optgroup label="Containers">
            				
            					<option value="/docs/containers/overview" >Overview</option>
            				
            					<option value="/docs/containers/quickstart-node" >Node.js</option>
            				
            					<option value="/docs/containers/quickstart-python" >Python</option>
            				
            					<option value="/docs/containers/quickstart-aspnet-core" >ASP.NET Core</option>
            				
            					<option value="/docs/containers/debug-common" >Debug</option>
            				
            					<option value="/docs/containers/docker-compose" >Docker Compose</option>
            				
            					<option value="/docs/containers/quickstart-container-registries" >Registries</option>
            				
            					<option value="/docs/containers/app-service" >Deploy to Azure</option>
            				
            					<option value="/docs/containers/choosing-dev-environment" >Choose a dev environment</option>
            				
            					<option value="/docs/containers/reference" >Customize</option>
            				
            					<option value="/docs/containers/bridge-to-kubernetes" >Develop with Kubernetes</option>
            				
            					<option value="/docs/containers/troubleshooting" >Tips and Tricks</option>
            				
            				</optgroup>
            			
            		
            			
            				<optgroup label="Data Science">
            				
            					<option value="/docs/datascience/overview" >Overview</option>
            				
            					<option value="/docs/datascience/jupyter-notebooks" >Jupyter Notebooks</option>
            				
            					<option value="/docs/datascience/data-science-tutorial" >Data Science Tutorial</option>
            				
            					<option value="/docs/datascience/python-interactive" >Python Interactive</option>
            				
            					<option value="/docs/datascience/pytorch-support" >PyTorch Support</option>
            				
            					<option value="/docs/datascience/azure-machine-learning" >Azure Machine Learning</option>
            				
            				</optgroup>
            			
            		
            			
            				<optgroup label="Azure">
            				
            					<option value="/docs/azure/extensions" >Extensions</option>
            				
            					<option value="/docs/azure/deployment" >Deployment</option>
            				
            					<option value="/docs/azure/remote-debugging" >Remote Debugging for Node.js</option>
            				
            					<option value="/docs/azure/docker" >Docker</option>
            				
            					<option value="/docs/azure/mongodb" >MongoDB</option>
            				
            					<option value="/docs/azure/kubernetes" >Kubernetes</option>
            				
            				</optgroup>
            			
            		
            			
            				<optgroup label="Remote">
            				
            					<option value="/docs/remote/remote-overview" >Overview</option>
            				
            					<option value="/docs/remote/ssh" >SSH</option>
            				
            					<option value="/docs/remote/containers" >Containers</option>
            				
            					<option value="/docs/remote/wsl" >Windows Subsystem for Linux</option>
            				
            					<option value="/docs/remote/codespaces" >GitHub Codespaces</option>
            				
            					<option value="/docs/remote/ssh-tutorial" >SSH Tutorial</option>
            				
            					<option value="/docs/remote/containers-tutorial" >Containers Tutorial</option>
            				
            					<option value="/docs/remote/wsl-tutorial" >WSL Tutorial</option>
            				
            					<option value="/docs/remote/attach-container" >Attach to Container</option>
            				
            					<option value="/docs/remote/create-dev-container" >Create a Dev Container</option>
            				
            					<option value="/docs/remote/containers-advanced" >Advanced Containers</option>
            				
            					<option value="/docs/remote/devcontainer-cli" >devcontainer CLI</option>
            				
            					<option value="/docs/remote/devcontainerjson-reference" >devcontainer.json</option>
            				
            					<option value="/docs/remote/troubleshooting" >Tips and Tricks</option>
            				
            					<option value="/docs/remote/faq" >FAQ</option>
            				
            				</optgroup>
            			
            		
            			
            		
            	</select>
            </nav>        </div>
        <div class="col-sm-9 col-md-8 body">
            <div class="edit-github pull-right">
                <a href="https://vscode.dev/github/microsoft/vscode-docs/blob/main/docs/editor/versioncontrol.md"
                    tabindex="-1">
                    <button type="button" class="btn btn-default" role="presentation" title="Edit this document in vscode.dev"><span
                            class="glyphicon glyphicon-pencil"></span><i>&nbsp;</i><span
                            class="hidden-xs">Edit</span></button>
                </a>
            </div>
            <h1>Using Version Control in VS Code</h1>
<p>Visual Studio Code has integrated source control management (SCM) and includes <a href="https://git-scm.com/" class="external-link" target="_blank">Git</a> support out-of-the-box. Many other source control providers are available through <a href="/docs/editor/extension-marketplace">extensions</a> on the VS Code Marketplace.</p>
<div class="marketplace-extensions-scm-curated"></div>
<blockquote>
<p><strong>Tip:</strong> Click on an extension tile to read the description and reviews in the Marketplace.</p>
</blockquote>
<h2 id="_scm-providers" data-needslink="_scm-providers">SCM Providers</h2>
<p>VS Code has support for handling multiple Source Control providers simultaneously. For example, you can open multiple Git repositories alongside your Azure DevOps Server local workspace and seamlessly work across your projects. To turn on the <strong>Source Control Providers</strong> view, select the overflow menu in the <strong>Source Control</strong> view (<span class="dynamic-keybinding" data-commandId="workbench.view.scm" data-osx="⌃⇧G" data-win="Ctrl+Shift+G" data-linux="Ctrl+Shift+G"><span class="keybinding">⌃⇧G</span> (Windows, Linux <span class="keybinding">Ctrl+Shift+G</span>)</span>), hover over <strong>Views</strong>, and make sure that <strong>Source Control Repositories</strong> is marked with a check. The <strong>Source Control Providers</strong> view shows the detected providers and repositories, and you can scope the display of your changes by selecting a specific provider.</p>
<p><img src="/assets/docs/editor/versioncontrol/scm-providers-list.png" alt="Source Control Repositories view option in overflow menu" loading="lazy"></p>
<h3 id="_scm-provider-extensions" data-needslink="_scm-provider-extensions">SCM Provider extensions</h3>
<p>If you would like to install another SCM provider, you can search on the <strong>scm providers</strong> extension category in the <strong>Extensions</strong> view (<span class="dynamic-keybinding" data-commandId="workbench.view.extensions" data-osx="⇧⌘X" data-win="Ctrl+Shift+X" data-linux="Ctrl+Shift+X"><span class="keybinding</span> (Windows, Linux <span class="keybinding">Ctrl+Shift+X</span>)</span>). Start typing '@ca' and you will see suggestions for extension categories like debuggers and linters. Select <code>@category:&quot;scm providers&quot;</code> to see available SCM providers.</p>
<p><img src="/assets/docs/editor/versioncontrol/scm-provider-category.png" alt="SCM Provider category in the marketplace" loading="lazy"></p>
<h2 id="_git-support" data-needslink="_git-support">Git support</h2>
<p>VS Code ships with a Git source control manager (SCM) extension. Most of the source control UI and work flows are common across other SCM extensions, so reading about the general Git support in VS Code will help you understand how to use another provider.</p>
<blockquote>
<p><strong>Note:</strong> If you are new to Git, the <a href="https://git-scm.com/documentation" class="external-link" target="_blank">git-scm</a> website is a good place to start, with a popular online <a href="https://git-scm.com/book" class="external-link" target="_blank">book</a>, Getting Started <a href="https://git-scm.com/video/what-is-git" class="external-link" target="_blank">videos</a> and <a href="https://github.github.com/training-kit/downloads/github-git-cheat-sheet.pdf" class="external-link" target="_blank">cheat sheets</a>. The VS Code documentation assumes you are already familiar with Git.</p>
</blockquote>
<p><img src="/assets/docs/editor/versioncontrol/overview.png" alt="Overview of Git" loading="lazy"></p>
<blockquote>
<p><strong>Note:</strong> VS Code will leverage your machine's Git installation, so you need to <a href="https://git-scm.com/download" class="external-link" target="_blank">install Git</a> first before you get these features. Make sure you install at least version <code>2.0.0</code>.</p>
</blockquote>
<blockquote>
<p><strong>👉</strong> When you commit, be aware that if your username and/or email is not set in your Git configuration, Git will fall back to using information from your local machine. You can find the details in <a href="https://git-scm.com/docs/git-commit#_commit_information" class="external-link" target="_blank">Git commit information</a>.</p>
</blockquote>
<p>The Source Control icon in the Activity Bar on the left will always indicate an <strong>overview of how many changes</strong> you currently have in your repository. Selecting the icon will show you the details of your current repository changes: <strong>CHANGES</strong>, <strong>STAGED CHANGES</strong> and <strong>MERGE CHANGES</strong>.</p>
<p>Clicking each item will show you in detail <strong>the textual changes within each file</strong>. Note that for unstaged changes, the editor on the right still lets you edit the file: feel free to use it!</p>
<p>You can also find indicators of the <strong>status of your repository</strong> in the bottom-left corner of VS Code: the <strong>current branch</strong>, <strong>dirty indicators</strong>, and the number of <strong>incoming and outgoing commits</strong> of the current branch. You can <strong>checkout</strong> any branch in your repository by clicking that status indicator and selecting the Git reference from the list.</p>
<blockquote>
<p><strong>Tip:</strong> You can open VS Code in a sub-directory of a Git repository. VS Code's Git services will still work as usual, showing all changes within the repository, but file changes outside of the scoped directory are shaded with a tool tip indicating they are located outside the current workspace.</p>
</blockquote>
<h2 id="_commit" data-needslink="_commit">Commit</h2>
<p><strong>Staging</strong> (git add) and <strong>unstaging</strong> (git reset) can be done via contextual actions in the files or by drag-and-drop.</p>
<p><img src="/assets/docs/editor/versioncontrol/stage-changes.png" alt="Stage all changes button" loading="lazy"></p>
<p>You can type a commit message above the changes and press <span class="keybinding">Ctrl+Enter</span> (macOS: <span class="keybinding">⌘+Enter</span>) to commit them. If there are any staged changes, only those changes will be committed. Otherwise, you'll get a prompt asking you to select what changes you'd like to commit and get the option to change your commit settings.</p>
<p>We've found this to be a great workflow. For example, in the earlier screenshot, only the staged changes to <code>overview.png</code> will be included in the commit. Later staging and commit actions could include the changes to <code>versioncontrol.md</code> and the two other <code>.png</code> images as a separate commit.</p>
<p>More specific <strong>Commit</strong> actions can be found in the <strong>Views and More Actions</strong> <code>...</code> menu on the top of the Source Control view.</p>
<p><img src="/assets/docs/editor/versioncontrol/scm-more-actions.png" alt="views and more actions button" loading="lazy"></p>
<blockquote>
<p><strong>Tip:</strong> If you commit your change to the wrong branch, undo your commit using the <strong>Git: Undo Last Commit</strong> command in the <strong>Command Palette</strong> (<span class="dynamic-keybinding" data-commandId="workbench.action.showCommands" data-osx="⇧⌘P" data-win="Ctrl+Shift+P" data-linux="Ctrl+Shift+P"><span class="keybinding">⇧⌘P</span> (Windows, Linux <span class="keybinding">Ctrl+Shift+P</span>)</span>).</p>
</blockquote>
<h2 id="_cloning-a-repository" data-needslink="_cloning-a-repository">Cloning a repository</h2>
<p>If you haven't opened a folder yet, the Source Control view will give you the options to <strong>Open Folder</strong> from your local machine or <strong>Clone Repository</strong>.</p>
<p><img src="/assets/docs/editor/versioncontrol/firstrun-source-control.png" alt="First run Source Control experience" loading="lazy"></p>
<p>If you select <strong>Clone Repository</strong>, you will be asked for the URL of the remote repository (for example on <a href="https://github.com/" class="external-link" target="_blank">GitHub</a>) and the parent directory under which to put the local repository.</p>
<p>For a GitHub repository, you would find the URL from the GitHub <strong>Code</strong> dialog.</p>
<p><img src="/assets/docs/editor/versioncontrol/GitHub-clone-dialog.png" alt="clone repository dialog" loading="lazy"></p>
<p>You would then paste that URL into the <strong>Git: Clone</strong> prompt.</p>
<p><img src="/assets/docs/editor/versioncontrol/set-repo-URL.png" alt="set repository URL" loading="lazy"></p>
<p>You'll also see the option to <strong>Clone from GitHub</strong>. Once you authenticate with your GitHub account in VS Code, you'll be able to search through repositories by name, and select any repo to clone it. You can also start the flow to clone a Git repository with the <strong>Git: Clone</strong> command in the <strong>Command Palette</strong> (<span class="dynamic-keybinding" data-commandId="workbench.action.showCommands" data-osx="⇧⌘P" data-win="Ctrl+Shift+P" data-linux="Ctrl+Shift+P"><span class="keybinding">⇧⌘P</span> (Windows, Linux <span class="keybinding">Ctrl+Shift+P</span>)</span>). To see a step-by-step walkthrough, check out our <a href="https://www.youtube.com/watch?v=bz1KauFlbQI" class="external-link" target="_blank">Clone repos from VS Code</a> video.</p>
<blockquote>
<p><strong>Note</strong>: If you'd like to work on a repository without cloning the contents to your local machine, you can install the <a href="https://marketplace.visualstudio.com/items?itemName=github.remotehub" class="external-link" target="_blank">GitHub Repositories</a> extension to browse and edit directly on GitHub. You can learn more in the <a href="/docs/editor/github#_github-repositories-extension">GitHub Repositories extension</a> section.</p>
</blockquote>
<h2 id="_branches-and-tags" data-needslink="_branches-and-tags">Branches and Tags</h2>
<p>You can create and checkout branches directly within VS code through the <strong>Git: Create Branch</strong> and <strong>Git: Checkout to</strong> commands in the <strong>Command Palette</strong> (<span class="dynamic-keybinding" data-commandId="workbench.action.showCommands" data-osx="⇧⌘P" data-win="Ctrl+Shift+P" data-linux="Ctrl+Shift+P"><span class="keybinding">⇧⌘P</span> (Windows, Linux <span class="keybinding">Ctrl+Shift+P</span>)</span>).</p>
<p>If you run <strong>Git: Checkout to</strong>, you will see a dropdown list containing all of the branches or tags in the current repository. It will also give you the option to create a new branch if you decide that's a better option, or checkout a branch in detached mode.</p>
<p><img src="/assets/docs/editor/versioncontrol/gitbranches.png" alt="Git checkout" loading="lazy"></p>
<p>The <strong>Git: Create Branch</strong> command lets you quickly create a new branch. Just provide the name of your new branch and VS Code will create the branch and switch to it. If you choose to <strong>Create new branch from...</strong>, you'll get an extra prompt that allows you to specify which commit the new branch should be pointing to.</p>
<h2 id="_remotes" data-needslink="_remotes">Remotes</h2>
<p>Given that your repository is connected to some remote and that your checked out branch has an <a href="https://git-scm.com/book/ch3-5.html" class="external-link" target="_blank">upstream link</a> to a branch in that remote, VS Code offers you useful actions to <strong>push</strong>, <strong>pull</strong>, and <strong>sync</strong> that branch (the latter will run a <strong>pull</strong> command followed by a <strong>push</strong> command). You can find these actions in the <strong>Views and More Actions</strong> <code>...</code> menu, along with the option to <strong>add or remove a remote</strong>.</p>
<p>VS Code is able to periodically fetch changes from your remotes. This enables VS Code to show how many changes your local repository is ahead or behind the remote. Starting with VS Code 1.19, this feature is disabled by default and you can use the <code>git.autofetch</code> <a href="/docs/getstarted/settings">setting</a> to enable it.</p>
<blockquote>
<p><strong>Tip:</strong> You should <a href="https://help.github.com/articles/caching-your-github-password-in-git/" class="external-link" target="_blank">set up a credential helper</a> to avoid getting asked for credentials every time VS Code talks to your Git remotes.  If you don't do this, you may want to consider disabling automatic fetching via the <code>git.autofetch</code> <a href="/docs/getstarted/settings">setting</a> to reduce the number of prompts you get.</p>
</blockquote>
<h2 id="_git-status-bar-actions" data-needslink="_git-status-bar-actions">Git Status Bar actions</h2>
<p>There is a <strong>Synchronize Changes</strong> action in the Status Bar, next to the branch indicator, when the current checked out branch has an upstream branch configured. <strong>Synchronize Changes</strong> will pull remote changes down to your local repository and then push local commits to the upstream branch.</p>
<p><img src="/assets/docs/editor/versioncontrol/git-status-bar-sync.png" alt="git status bar sync" loading="lazy"></p>
<p>If there is no upstream branch configured and the Git repository has remotes set up, the <strong>Publish</strong> action is enabled. This will let you publish the current branch to a remote.</p>
<p><img src="/assets/docs/editor/versioncontrol/git-status-bar-publish.png" alt="git status bar publish" loading="lazy"></p>
<h2 id="_gutter-indicators" data-needslink="_gutter-indicators">Gutter indicators</h2>
<p>If you open a folder that is a Git repository and begin making changes, VS Code will add useful annotations to the gutter and to the overview ruler.</p>
<ul>
<li>A red triangle indicates where lines have been deleted</li>
<li>A green bar indicates new added lines</li>
<li>A blue bar indicates modified lines</li>
</ul>
<p><img src="/assets/docs/editor/editingevolved/gutter.png" alt="Gutter indicators" loading="lazy"></p>
<h2 id="_merge-conflicts" data-needslink="_merge-conflicts">Merge conflicts</h2>
<p><img src="/assets/docs/editor/versioncontrol/merge-conflict.png" alt="Git merge" loading="lazy"></p>
<p>Merge conflicts are recognized by VS Code. Differences are highlighted and there are inline actions to accept either one or both changes. Once the conflicts are resolved, stage the conflicting file so you can commit those changes.</p>
<h2 id="_viewing-diffs" data-needslink="_viewing-diffs">Viewing diffs</h2>
<p>Our Git tooling supports viewing of diffs within VS Code.</p>
<p><img src="/assets/docs/editor/versioncontrol/diff.png" alt="A File Diff in VS Code" loading="lazy"></p>
<blockquote>
<p><strong>Tip:</strong> You can diff any two files by first right clicking on a file in the Explorer or <strong>OPEN EDITORS</strong> list and selecting <strong>Select for Compare</strong> and then right-click on the second file to compare with and select <strong>Compare with 'file_name_you_chose'</strong>.   Alternatively from the keyboard hit <span class="dynamic-keybinding" data-commandId="workbench.action.showCommands" data-osx="⇧⌘P" data-win="Ctrl+Shift+P" data-linux="Ctrl+Shift+P"><span class="keybinding">⇧⌘P</span> (Windows, Linux <span class="keybinding">Ctrl+Shift+P</span>)</span> and select <strong>File: Compare Active File With</strong> and you will be presented with a list of recent files.</p>
</blockquote>
<h3 id="_diff-editor-review-pane" data-needslink="_diff-editor-review-pane">Diff editor review pane</h3>
<p>There is a review pane in the Diff editor that presents changes in a unified patch format. You can navigate between changes with <strong>Go to Next Difference</strong> (<span class="dynamic-keybinding" data-commandId="editor.action.diffReview.next" data-osx="F7" data-win="F7" data-linux="F7"><span class="keybinding">F7</span></span>) and <strong>Go to Previous Difference</strong> (<span class="dynamic-keybinding" data-commandId="editor.action.diffReview.prev" data-osx="⇧F7" data-win="Shift+F7" data-linux="Shift+F7"><span class="keybinding">⇧F7</span> (Windows, Linux <span class="keybinding">Shift+F7</span>)</span>). Lines can be navigated with arrow keys and pressing <span class="keybinding">Enter</span> will jump back in the Diff editor and the selected line.</p>
<p><img src="/assets/docs/editor/versioncontrol/diff-review-pane.png" alt="diff-review-pane" loading="lazy"></p>
<p><strong>Note:</strong> This experience is especially helpful for screen reader users.</p>
<h2 id="_timeline-view" data-needslink="_timeline-view">Timeline view</h2>
<p>The Timeline view, accessible at the bottom of the File Explorer by default, is a unified view for visualizing time-series events (for example, Git commits) for a file.</p>
<p><img src="/assets/docs/editor/versioncontrol/timeline-view.png" alt="Timeline view" loading="lazy"></p>
<p>VS Code's built-in Git support provides the Git commit history of the specified file. Selecting a commit will open a diff view of the changes introduced by that commit. When you right-click on a commit, you'll get options to <strong>Copy Commit ID</strong> and <strong>Copy Commit Message</strong>.</p>
<p>Visual Studio Code supports more Git history workflows through <a href="/docs/editor/extension-marketplace">extensions</a> available on the VS Code Marketplace.</p>
<div class="marketplace-extensions-scm-history-curated"></div>
<blockquote>
<p><strong>Tip:</strong> Click on an extension tile to read the description and reviews in the Marketplace.</p>
</blockquote>
<h2 id="_git-output-window" data-needslink="_git-output-window">Git output window</h2>
<p>You can always peek under the hood to see the Git commands we are using.  This is helpful if something strange is happening or if you are just curious. :)</p>
<p>To open the Git output window, run <strong>View</strong> &gt; <strong>Output</strong> and select <strong>Git</strong> from the dropdown list.</p>
<h2 id="_initialize-a-repository" data-needslink="_initialize-a-repository">Initialize a repository</h2>
<p>If your workspace is on your local machine, you can enable Git source control by creating a Git repository with the <strong>Initialize Repository</strong> command. When VS Code doesn't detect an existing Git repository, the Source Control view will give you the options to <strong>Initialize Repository</strong> or <strong>Publish to GitHub</strong>.</p>
<p><img src="/assets/docs/editor/versioncontrol/initialize-repository.png" alt="Git initialize repository" loading="lazy"></p>
<p>You can also run the <strong>Git: Initialize Repository</strong> and <strong>Publish to GitHub</strong> commands from the <strong>Command Palette</strong> (<span class="dynamic-keybinding" data-commandId="workbench.action.showCommands" data-osx="⇧⌘P" data-win="Ctrl+Shift+P" data-linux="Ctrl+Shift+P"><span class="keybinding">⇧⌘P</span> (Windows, Linux <span class="keybinding">Ctrl+Shift+P</span>)</span>). Running <strong>Initialize Repository</strong> will create the necessary Git repository metadata files and show your workspace files as untracked changes ready to be staged. <strong>Publish to GitHub</strong> will directly publish your workspace folder to a GitHub repository, allowing you to choose between a private and public repositories. Check out our <a href="https://www.youtube.com/watch?v=3BBvBwDW4CY" class="external-link" target="_blank">publishing repos</a> video for more information about publishing to GitHub.</p>
<h2 id="_vs-code-as-git-editor" data-needslink="_vs-code-as-git-editor">VS Code as Git editor</h2>
<p>When you launch VS Code from the command line, you can pass the <code>--wait</code> argument to make the launch command wait until you have closed the new VS Code instance. This can be useful when you configure VS Code as your Git external editor so Git will wait until you close the launched VS Code instance.</p>
<p>Here are the steps to do so:</p>
<ol>
<li>Make sure you can run <code>code --help</code> from the command line and you get help.
<ul>
<li>if you do not see help, please follow these steps:
<ul>
<li>macOS: Select <strong>Shell Command: Install 'Code' command in path</strong> from the <strong>Command Palette</strong>.</li>
<li>Windows: Make sure you selected <strong>Add to PATH</strong> during the installation.</li>
<li>Linux: Make sure you installed Code via our new .deb or .rpm packages.</li>
</ul>
</li>
</ul>
</li>
<li>From the command line, run <code>git config --global core.editor &quot;code --wait&quot;</code></li>
</ol>
<p>Now you can run <code>git config --global -e</code> and use VS Code as editor for configuring Git.</p>
<h3 id="_vs-code-as-git-diff-tool" data-needslink="_vs-code-as-git-diff-tool">VS Code as Git diff tool</h3>
<p>Add the following to your Git configurations to use VS Code as the diff tool:</p>
<pre class="shiki" style="background-color: #FFFFFF"><code><span style="color: #000000">[diff]</span>
<span style="color: #000000">    tool = default-difftool</span>
<span style="color: #000000">[difftool </span><span style="color: #A31515">"default-difftool"</span><span style="color: #000000">]</span>
<span style="color: #000000">    cmd = code --wait --diff </span><span style="color: #001080">$LOCAL</span><span style="color: #000000"> </span><span style="color: #001080">$REMOTE</span></code></pre>
<p>This leverages the <code>--diff</code> option you can pass to VS Code to compare two files side by side.</p>
<p>To summarize, here are some examples of where you can use VS Code as the editor:</p>
<ul>
<li><code>git rebase HEAD~3 -i</code> do interactive rebase using VS Code</li>
<li><code>git commit</code> use VS Code for the commit message</li>
<li><code>git add -p</code> followed by <span class="keybinding">e</span> for interactive add</li>
<li><code>git difftool &lt;commit&gt;^ &lt;commit&gt;</code> use VS Code as the diff editor for changes</li>
</ul>
<h2 id="_working-with-pull-requests" data-needslink="_working-with-pull-requests">Working with pull requests</h2>
<p>Visual Studio Code also supports pull request workflows through the <a href="https://marketplace.visualstudio.com/items?itemName=GitHub.vscode-pull-request-github" class="external-link" target="_blank">GitHub Pull Requests and Issues extension</a> available on the VS Code Marketplace. Pull request extensions let you review, comment, and verify source code contributions directly within VS Code.</p>
<h2 id="_next-steps" data-needslink="_next-steps">Next steps</h2>
<ul>
<li><a href="/docs/introvideos/versioncontrol">Intro Video - Git Version Control</a> - An introductory video providing an overview of VS Code Git support.</li>
<li><a href="/docs/editor/codebasics">Basic Editing</a> - Learn about the powerful VS Code editor.</li>
<li><a href="/docs/editor/editingevolved">Code Navigation</a> - Move quickly through your source code.</li>
<li><a href="/docs/editor/debugging">Debugging</a> - This is where VS Code really shines</li>
<li><a href="/docs/editor/tasks">Tasks</a> - Running tasks with Gulp, Grunt, and Jake.  Showing Errors and Warnings</li>
<li><a href="/api/extension-guides/scm-provider">Source Control API</a> - If you want to integrate another Source Control provider into VS Code, see our Source Control API.</li>
</ul>
<h2 id="_common-questions" data-needslink="_common-questions">Common questions</h2>
<h3 id="_i-initialized-my-repo-but-the-actions-in-the-menu-are-all-grayed-out" data-needslink="_i-initialized-my-repo-but-the-actions-in-the-menu-are-all-grayed-out">I initialized my repo but the actions in the <code>...</code> menu are all grayed out</h3>
<p>To <strong>push, pull, and sync</strong> you need to have a Git origin set up.  You can get the required URL from the repository host.  Once you have that URL, you need to add it to the Git settings by running a couple of command-line actions. For example:</p>
<pre class="shiki" style="background-color: #FFFFFF"><code><span style="color: #000000">&gt; git remote add origin https://github.com/&lt;repo owner&gt;/&lt;repo name&gt;.git</span>
<span style="color: #000000">&gt; git push -u origin main</span></code></pre>
<h3 id="_my-team-is-using-team-foundation-version-control-tfvc-instead-of-git-what-should-i-do" data-needslink="_my-team-is-using-team-foundation-version-control-tfvc-instead-of-git-what-should-i-do">My team is using Team Foundation Version Control (TFVC) instead of Git. What should I do?</h3>
<p>Use the <a href="https://marketplace.visualstudio.com/items?itemName=ms-vsts.team" class="external-link" target="_blank">Azure Repos</a> extension and this will light up TFVC support.</p>
<h3 id="_why-do-the-pull-push-and-sync-actions-never-finish" data-needslink="_why-do-the-pull-push-and-sync-actions-never-finish">Why do the Pull, Push and Sync actions never finish?</h3>
<p>This usually means there is no credential management configured in Git and you're not getting credential prompts for some reason.</p>
<p>You can always set up a <a href="https://help.github.com/articles/caching-your-github-password-in-git/" class="external-link" target="_blank">credential helper</a> in order to pull and push from a remote server without having VS Code prompt for your credentials each time.</p>
<h3 id="_how-can-i-sign-in-to-git-with-my-azure-devops-organization-that-requires-multifactor-authentication" data-needslink="_how-can-i-sign-in-to-git-with-my-azure-devops-organization-that-requires-multifactor-authentication">How can I sign in to Git with my Azure DevOps organization that requires multi-factor authentication?</h3>
<p><a href="https://github.com/GitCredentialManager/git-credential-manager" class="external-link" target="_blank">Git Credential Manager</a> (GCM) is the recommended Git credential helper for Windows, macOS, and Linux. If you're running Git for Windows, GCM has already been installed and configured for you. If you're running on macOS or Linux, the GCM <a href="https://github.com/GitCredentialManager/git-credential-manager#download-and-install" class="external-link" target="_blank">README</a>
has setup instructions.</p>
<h3 id="_i-have-github-desktop-installed-on-my-computer-but-vs-code-ignores-it" data-needslink="_i-have-github-desktop-installed-on-my-computer-but-vs-code-ignores-it">I have GitHub Desktop installed on my computer but VS Code ignores it</h3>
<p>VS Code only supports the <a href="https://git-scm.com/" class="external-link" target="_blank">official Git distribution</a> for its Git integration.</p>
<h3 id="_i-keep-getting-git-authentication-dialogs-whenever-vs-code-is-running" data-needslink="_i-keep-getting-git-authentication-dialogs-whenever-vs-code-is-running">I keep getting Git authentication dialogs whenever VS Code is running</h3>
<p>VS Code automatically fetches changes from the server in order to present you with a summary of incoming changes. The Git authentication dialog is independent from VS Code itself and is a part of your current Git credential helper.</p>
<p>One way to avoid these prompts is to set up a <a href="https://help.github.com/articles/caching-your-github-password-in-git/" class="external-link" target="_blank">credential helper</a> that remembers your credentials.</p>
<p>Another option is to disable the auto fetch feature by changing the following setting: <code>&quot;git.autofetch&quot;: false</code>.</p>
<h3 id="_can-i-use-ssh-git-authentication-with-vs-code" data-needslink="_can-i-use-ssh-git-authentication-with-vs-code">Can I use SSH Git authentication with VS Code?</h3>
<p>Yes, though VS Code works most easily with SSH keys without a passphrase. If you have an SSH key with a passphrase, you'll need to launch VS Code from a Git Bash prompt to inherit its SSH environment.</p>

            <div class="feedback"></div>
            
            <div class="body-footer">3/30/2022</div>
            
        </div>
        <div class="col-sm-3 col-md-2 docs-subnavbar-container">
            <nav id="docs-subnavbar" aria-label="On Page" data-spy="affix" data-offset-top="20">
                
                <h4><span class="sr-only">In this article there are 17 sections</span><span
                        aria-hidden="true">In this article</span></h4>
                <ul class="nav">
                    
                    <li><a href="#_scm-providers">SCM Providers</a></li>
                    
                    <li><a href="#_git-support">Git support</a></li>
                    
                    <li><a href="#_commit">Commit</a></li>
                    
                    <li><a href="#_cloning-a-repository">Cloning a repository</a></li>
                    
                    <li><a href="#_branches-and-tags">Branches and Tags</a></li>
                    
                    <li><a href="#_remotes">Remotes</a></li>
                    
                    <li><a href="#_git-status-bar-actions">Git Status Bar actions</a></li>
                    
                    <li><a href="#_gutter-indicators">Gutter indicators</a></li>
                    
                    <li><a href="#_merge-conflicts">Merge conflicts</a></li>
                    
                    <li><a href="#_viewing-diffs">Viewing diffs</a></li>
                    
                    <li><a href="#_timeline-view">Timeline view</a></li>
                    
                    <li><a href="#_git-output-window">Git output window</a></li>
                    
                    <li><a href="#_initialize-a-repository">Initialize a repository</a></li>
                    
                    <li><a href="#_vs-code-as-git-editor">VS Code as Git editor</a></li>
                    
                    <li><a href="#_working-with-pull-requests">Working with pull requests</a></li>
                    
                    <li><a href="#_next-steps">Next steps</a></li>
                    
                    <li><a href="#_common-questions">Common questions</a></li>
                    
                </ul>
                
                <div class="connect-widget"></div>
            </nav>
        </div>
    </div>
</div>
      </div>
  </div>

  <footer role="contentinfo">
      <div class="container">
          <div class="row">
              <div class="left col-md-7">
                  <ul class="links">
                      <li>
                          <span class="message">Hello from Seattle.</span>
                      </li>
                      <li>
                          <a href="https://go.microsoft.com/fwlink/?LinkID=533687" onclick="followOnTwitter()" tabindex="0">Follow @code</a>
                      </li>
                      <li>
                          <div class="github-star-button">
                              <iframe src="/assets/github-button.html?user=Microsoft&repo=vscode&type=star&count=true"
                                  frameborder="0" scrolling="0" width="130px" height="20px" title="GitHub follow button" loading="lazy"></iframe>
                          </div>
                      </li>
  
                      <script>
                          function followOnTwitter() {
                              var windowFeatures = "location=yes,height=600,width=550,scrollbars=yes,status=yes";
                              var originalReferer = "&original_referer=" + document.URL;
                              var screenName = "&screen_name=code";
                              var URL = "https://twitter.com/intent/follow?" + originalReferer + screenName;
                              window.open(URL, "_blank", windowFeatures);
                          }
  
                          function manageConsent() {
                              if(WcpConsent.siteConsent.isConsentRequired){
                                  WcpConsent.siteConsent.manageConsent();
                              }
                          }
                      </script>
                  </ul>
              </div>
              <div class="right col-md-5">
                  <ul class="links">
                      <li><a id="footer-support-link" href="https://support.serviceshub.microsoft.com/supportforbusiness/create?sapId=d66407ed-3967-b000-4cfb-2c318cad363d"
                              target="_blank">Support</a></li>
                      <li><a id="footer-privacy-link" href="https://privacy.microsoft.com/privacystatement"
                              target="_blank">Privacy</a></li>
                      <li style="display: none;"><a id="footer-cookie-link" style="cursor: pointer;" onclick="manageConsent()"
                              target="_blank">Manage Cookies</a></li>
                      <li><a id="footer-terms-link" href="https://www.microsoft.com/legal/terms-of-use"
                              target="_blank">Terms of Use</a></li>
                      <li><a id="footer-license-link" href="/License">License</a></li>
                  </ul>
                  <div class="copyright">
                      <a id="footer-microsoft-link" class="logo" href="https://www.microsoft.com">
                          <img class="microsoft-logo" src="/assets/images/microsoft-logo.png" height="20" alt="Microsoft homepage"/>
                          <img class="microsoft-logo-inverted" src="/assets/images/microsoft-logo-inverted.png" height="20" alt="Microsoft homepage" />
                      </a>
                      <span>&copy; 2022 Microsoft</span>
                  </div>
              </div>
          </div>
      </div>
  </footer>
  <script src="/dist/index.js"></script>

  

  <script type="application/ld+json">
    {
      "@context" : "http://schema.org",
      "@type" : "SoftwareApplication",
      "name" : "Visual Studio Code",
      "softwareVersion": "1.66",
      "offers": {
        "@type": "Offer",
        "price": "0",
        "priceCurrency": "USD"
      },
      "applicationCategory": "DeveloperApplication",
      "applicationSubCategory": "Text Editor",
      "alternateName": "VS Code",
      "datePublished": "2021-11-03",
      "operatingSystem": "Mac, Linux, Windows",
      "logo": "https://code.visualstudio.com/assets/apple-touch-icon.png",
      "screenshot": "https://code.visualstudio.com/assets/home/home-screenshot-win.png",
      "releaseNotes": "https://code.visualstudio.com/updates",
      "downloadUrl": "https://code.visualstudio.com/download",
      "license": "https://code.visualstudio.com/license",
      "softwareRequirements": "https://code.visualstudio.com/docs/supporting/requirements",
      "url" : "https://code.visualstudio.com",
      "author": {
        "@type": "Organization",
        "name": "Microsoft"
      },
      "publisher": {
        "@type": "Organization",
        "name": "Microsoft"
      },
      "maintainer": {
        "@type": "Organization",
        "name": "Microsoft"
      },
      "potentialAction": {
        "@type": "SearchAction",
        "target": "https://code.visualstudio.com/Search?q={search_term_string}",
        "query-input": "required name=search_term_string"
      },
      "sameAs" : [
        "https://en.wikipedia.org/wiki/Visual_Studio_Code",
        "https://twitter.com/code",
        "https://www.youtube.com/code",
        "https://www.tiktok.com/@vscode",
        "https://github.com/microsoft/vscode"
      ]
    }
  </script>
</body>跑了
</html>