using System;

public class Class1
{
	public Class1()
	{< !DOCTYPE html >
 < html lang = "en" >
  < head >
  
    < meta charset = "utf-8" />
   
     < meta name = "viewport" content = "width=device-width, initial-scale=1.0" >
      
        < meta name = "google-site-verification" content = "hNs7DXrTySP_X-0P_AC0WulAXvUwgSXEmgfcO2r79dw" />
         

           < !--Twitter and Facebook OpenGraph Metadata-->
         
           < meta name = "twitter:card" content = "summary_large_image" />
            
              < meta name = "twitter:site" content = "@code" />
               

                 < meta name = "description" content = "Learn about Visual Studio Code collected telemetry and how to opt out." />
                  < meta name = "keywords" content = "" />
                     < meta name = "ms.prod" content = "vs-code" />
                        < meta name = "ms.TOCTitle" content = "Telemetry" />
                           < meta name = "ms.ContentId" content = "47a2e3b1-24f2-42e6-a6e6-272c2a0f3218" />
                              < meta name = "ms.date" content = "3/30/2022" />
                                 < meta name = "ms.topic" content = "conceptual" />
                                    < !--Twitter and Facebook OpenGraph Metadata-->
                                    < meta name = "twitter:card" content = "summary_large_image" />
                                       < meta property = "og:url" content = "https://code.visualstudio.com/docs/getstarted/telemetry" />
                                          < meta property = "og:type" content = "article" />
                                             < meta property = "og:title" content = "Visual Studio Code Telemetry" />
                                                < meta property = "og:description" content = "Learn about Visual Studio Code collected telemetry and how to opt out." />
                                                   

                                                   < meta property = "og:image" content = "https://code.visualstudio.com/opengraphimg/opengraph-docs.png" />
                                                      



                                                        < link rel = "shortcut icon" href = "/favicon.ico" sizes = "128x128" />
                                                           
                                                             < link rel = "apple-touch-icon" href = "/apple-touch-icon.png" >
                                                              

                                                                < title > Visual Studio Code Telemetry </ title >
                                                                 

                                                                   < link rel = "stylesheet" href = "/vendor/bootstrap/css/bootstrap.min.css" >
                                                                    
                                                                      < link rel = "stylesheet" href = "/dist/style.css" >
                                                                       

                                                                         < script src = "https://js.monitor.azure.com/scripts/c/ms.jsll-3.min.js" type = "text/javascript" ></ script >
                                                                          
                                                                            < script type = "text/javascript" >
                                                                               var config = {
        coreData:
            {
            appId: "vscode"
        },
      instrumentationKey: "1a3eb3104447440391ad5f2a6ee06a0a-62879566-bc58-4741-9650-302bf2af703f-7103",
      webAnalyticsConfiguration:
            {
            urlCollectQuery: true
      }

        };
        if (window.awa)
        {
            awa.init(config);
        }
  </ script >


  < link rel = "dns-prefetch" href = "//target.microsoft.com" >
   
     < link rel = "dns-prefetch" href = "//microsoftmscompoc.tt.omtrdc.net" >
      
        < script >
        var at_property = 'a7e3965e-a530-9aab-41f3-2145f10bc083';
  </ script >
  < script src = "/vendor/at/at-config.js" type = "text/javascript" ></ script >
   
     < script src = "/vendor/at/at.js" type = "text/javascript" ></ script >
      

        < script >
        (function(i, s, o, g, r, a, m){
            i['GoogleAnalyticsObject'] = r; i[r] = i[r] || function(){
                (i[r].q = i[r].q ||[]).push(arguments)},i[r].l = 1 * new Date(); a = s.createElement(o),
  m = s.getElementsByTagName(o)[0]; a.async = 1; a.src = g; m.parentNode.insertBefore(a, m)
              })(window, document, 'script', '//www.google-analytics.com/analytics.js', 'ga');
  </ script >
  < link rel = "alternate" type = "application/atom+xml" title = "RSS Feed for code.visualstudio.com" href = "/feed.xml" />
       </ head >
       

       < body >
       
         < !--EU Cookie Compliance JS-- >
       
         < script src = "https://wcpstatic.microsoft.com/mscc/lib/v2/wcp-consent.js" ></ script >
        

          < div id = "main" >
         
                   < div class="navbar-fixed-container">
              <div class="navbar navbar-inverse navbar-fixed-top ">
                  <div id = 'cookie-banner' ></ div >        < nav role="navigation" aria-label="Top Level">
                      <div class="container">
                          <div class="nav navbar-header">
                              <a role = "button" id="skip-to-content" class="link-button" href="#main-content">Skip to content<i>&nbsp;</i><span class="glyphicon glyphicon-menu-down"></span></a>
                              <a class="navbar-brand" href="/">Visual Studio Code</a>
                              <button type = "button" class="navbar-toggle" role="navigation" data-toggle="collapse" data-target=".navbar-collapse" aria-label="Toggle Navigation Menu">
                                  <span class="icon-bar"></span>
                                  <span class="icon-bar"></span>
                                  <span class="icon-bar"></span>
                              </button>
                          </div>
                          <div class="navbar-collapse collapse" role="navigation">
                              <ul class="nav navbar-nav navbar-left">
                                  <li class="active" ><a id = "nav-docs" href="/docs">Docs</a></li>
                                  <li ><a id = "nav-updates" href="/updates">Updates</a></li>
                                  <li ><a id = "nav-blogs" href="/blogs">Blog</a></li>
                                  <li ><a id = "nav-extend" href="/api">API</a></li>
                                  <li><a href = "https://marketplace.visualstudio.com/VSCode" target="_blank" id="nav-extensions">Extensions</a></li>
                                  <li ><a id = "nav-faqs" href="/docs/supporting/faq">FAQ</a></li>
                                  <li ><a id = "nav-learn" href="/learn">Learn</a></li>
                                  <li class='search visible-xs visible-sm'
                                      ><a href = "/Search" > Search </ a ></ li >
                              </ ul >


                              < ul class="nav navbar-nav navbar-right" role="presentation">
                                  <!-- Floating search icon -->
                                  <li>
                                      <a href = "/Search" title="Search" class="btn search-btn" id="nav-search">
                                          <img class="search-icon" src="/assets/icons/search.svg" width="16px" height="16px" alt="Search"/>
                                          <img class="search-icon-inverted" src="/assets/icons/search_dark.svg" width="16px" height="16px" alt="Search" />
                                      </a>
                                  </li>
                                  <!-- Actual search icon -->
                                  <li class="search" role="presentation">
                                      <form class="nav-search search-form" role="search" aria-label="Search">
                                          <div class="input-group" role="presentation">
                                              <input type = "text" name="q" class="search-box form-control" placeholder="Search Docs" aria-label="Search text"/>
                                              <span class="input-group-btn">
                                                  <button tabindex = "0" class="btn" type="submit" aria-label="Search">
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
                  <p class="message"><a href = "/updates" id="banner-link-updates">Version 1.66</a> is now available! Read about the new features and fixes from March.</p> 
              </div>
              <div tabindex = "0" role="button" title="Dismiss this update" class="dismiss-btn" id="banner-dismiss-btn"><span class="sr-only">Dismiss this update</span><span aria-hidden= "true" class="glyph-icon"></span></div>
          </div>      <div role = "main" id="main-content">
        <script>
    function closeReportIssue()
    {
        var element = document.getElementById('surveypopup');
        element.parentElement.removeChild(element);
    }

    function reportIssue(tutorial, page)
    {
        var div = document.createElement('div');
        div.innerHTML = '<div id="surveypopup" class="overlay visible"><div class="surveypopup"><div id="surveytitle">Tell us more<a href="javascript:void(0)" onclick="closeReportIssue()">X</a></div><div id="surveydiv"><iframe frameBorder="0" scrolling="0" src="https://www.research.net/r/PWZWZ52?tutorial=' + tutorial + '&step=' + page + '"></iframe></div></div></div>';
        document.body.appendChild(div.children[0]);
    }

    function pushCodingPackEvent(language, os)
    {
        let id = `${ language}
        -${ os}
        -coding - pack`;
        var analytics = window.vscodeAnalytics;

        analytics && analytics.event (
            'click',
            'download',
            id,
        );
    }
</script>

<div class="container body-content docs">
    <div class="row">
        <div class="col-md-2 docs-navbar-container">
            <nav id = "docs-navbar" aria-label="Topics" class="docs-nav visible-md visible-lg">
            	<ul class="nav" id="main-nav">
            		<li >
            			<a class="docs-home" href="/docs" >Overview</a>
            		</li>
            		
            			
            		
            			
            				<li class="panel collapsed">
            					<a class="area" role="button" href="#setup-articles" data-parent="#main-nav" data-toggle="collapse">Setup</a>
            					<ul id = "setup-articles" class="collapse ">
            					
            						<li >
            							<a href = "/docs/setup/setup-overview" > Overview </ a >

                                    </ li >


                                    < li >

                                        < a href="/docs/setup/linux" >Linux</a>
            						</li>
            					
            						<li >
            							<a href = "/docs/setup/mac" > macOS </ a >

                                    </ li >


                                    < li >

                                        < a href="/docs/setup/windows" >Windows</a>
            						</li>
            					
            						<li >
            							<a href = "/docs/setup/raspberry-pi" > Raspberry Pi</a>
            						</li>
            					
            						<li >
            							<a href = "/docs/setup/network" > Network </ a >

                                    </ li >


                                    < li >

                                        < a href="/docs/setup/additional-components" >Additional Components</a>
            						</li>
            					
            						<li >
            							<a href = "/docs/setup/uninstall" > Uninstall </ a >
 
                                     </ li >
 

                                 </ ul >
 
                             </ li >
 



                             < li class="panel active expanded">
            					<a class="area" role="button" href="#getstarted-articles" data-parent="#main-nav" data-toggle="collapse">Get Started</a>
            					<ul id = "getstarted-articles" class="collapse in">
            					
            						<li >
            							<a href = "/docs/getstarted/introvideos" > Intro Videos</a>
            						</li>
            					
            						<li >
            							<a href = "/docs/getstarted/tips-and-tricks" > Tips and Tricks</a>
            						</li>
            					
            						<li >
            							<a href = "/docs/getstarted/userinterface" > User Interface</a>
               						</li>
            					
            						<li >
            							<a href = "/docs/getstarted/themes" > Themes </ a >
   
                                       </ li >
   

                                       < li >
   
                                           < a href= "/docs/getstarted/settings" > Settings </ a >
   
                                       </ li >
   

                                       < li >
   
                                           < a href= "/docs/getstarted/keybindings" > Key Bindings</a>
               						</li>
            					
            						<li >
            							<a href = "/docs/getstarted/locales" > Display Language</a>
               						</li>
            					
            						<li class="active">
            							<a href = "/docs/getstarted/telemetry" aria-label="Current Page: Telemetry">Telemetry</a>
            						</li>
            					
            					</ul>
            				</li>
            			
            		
            			
            				<li class="panel collapsed">
            					<a class="area" role="button" href="#editor-articles" data-parent="#main-nav" data-toggle="collapse">User Guide</a>
            					<ul id = "editor-articles" class="collapse ">
            					
            						<li >
            							<a href = "/docs/editor/codebasics" > Basic Editing</a>
            						</li>
            					
            						<li >
            							<a href = "/docs/editor/extension-marketplace" > Extension Marketplace</a>
            						</li>
            					
            						<li >
            							<a href = "/docs/editor/intellisense" > IntelliSense </ a >

                                    </ li >


                                    < li >

                                        < a href="/docs/editor/editingevolved" >Code Navigation</a>
            						</li>
            					
            						<li >
            							<a href = "/docs/editor/refactoring" > Refactoring </ a >
 
                                     </ li >
 

                                     < li >
 
                                         < a href= "/docs/editor/debugging" > Debugging </ a >
 
                                     </ li >
 

                                     < li >
 
                                         < a href= "/docs/editor/versioncontrol" > Version Control</a>
             						</li>
            					
            						<li >
            							<a href = "/docs/editor/github" > Working with GitHub</a>
            						</li>
            					
            						<li >
            							<a href = "/docs/editor/vscode-web" > VS Code for the Web</a>
            						</li>
            					
            						<li >
            							<a href = "/docs/editor/integrated-terminal" > Integrated Terminal</a>
             						</li>
            					
            						<li >
            							<a href = "/docs/editor/tasks" > Tasks </ a >
 
                                     </ li >
 

                                     < li >
 
                                         < a href= "/docs/editor/settings-sync" > Settings Sync</a>
             						</li>
            					
            						<li >
            							<a href = "/docs/editor/userdefinedsnippets" > Snippets </ a >
 
                                     </ li >
 

                                     < li >
 
                                         < a href= "/docs/editor/emmet" > Emmet </ a >
 
                                     </ li >
 

                                     < li >
 
                                         < a href= "/docs/editor/command-line" > Command Line</a>
             						</li>
            					
            						<li >
            							<a href = "/docs/editor/workspace-trust" > Workspace Trust</a>
             						</li>
            					
            						<li >
            							<a href = "/docs/editor/multi-root-workspaces" > Multi - root Workspaces</a>
             						</li>
            					
            						<li >
            							<a href = "/docs/editor/accessibility" > Accessibility </ a >
 
                                     </ li >
 

                                 </ ul >
 
                             </ li >
 



                             < li class="panel collapsed">
            					<a class="area" role="button" href="#languages-articles" data-parent="#main-nav" data-toggle="collapse">Languages</a>
            					<ul id = "languages-articles" class="collapse ">
            					
            						<li >
            							<a href = "/docs/languages/overview" > Overview </ a >

                                    </ li >


                                    < li >

                                        < a href="/docs/languages/javascript" >JavaScript</a>
            						</li>
            					
            						<li >
            							<a href = "/docs/languages/json" > JSON </ a >

                                    </ li >


                                    < li >

                                        < a href="/docs/languages/html" >HTML</a>
            						</li>
            					
            						<li >
            							<a href = "/docs/languages/css" > CSS, SCSS and Less</a>
            						</li>
            					
            						<li >
            							<a href = "/docs/languages/typescript" > TypeScript </ a >
   
                                       </ li >
   

                                       < li >
   
                                           < a href= "/docs/languages/markdown" > Markdown </ a >
   
                                       </ li >
   

                                       < li >
   
                                           < a href= "/docs/languages/powershell" > PowerShell </ a >
   
                                       </ li >
   

                                       < li >
   
                                           < a href= "/docs/languages/cpp" > C++ </ a >
   
                                       </ li >
   

                                       < li >
   
                                           < a href= "/docs/languages/java" > Java </ a >
   
                                       </ li >
   

                                       < li >
   
                                           < a href= "/docs/languages/php" > PHP </ a >
   
                                       </ li >
   

                                       < li >
   
                                           < a href= "/docs/languages/python" > Python </ a >
   
                                       </ li >
   

                                       < li >
   
                                           < a href= "/docs/languages/julia" > Julia </ a >
   
                                       </ li >
   

                                       < li >
   
                                           < a href= "/docs/languages/r" > R </ a >
   
                                       </ li >
   

                                       < li >
   
                                           < a href= "/docs/languages/go" > Go </ a >
   
                                       </ li >
   

                                       < li >
   
                                           < a href= "/docs/languages/tsql" > T - SQL </ a >
   
                                       </ li >
   

                                       < li >
   
                                           < a href= "/docs/languages/csharp" > C#</a>
            						</ li >
   

                                       < li >
   
                                           < a href= "/docs/languages/dotnet" >.NET Core</a>
               						</li>
            					
            					</ul>
            				</li>
            			
            		
            			
            				<li class="panel collapsed">
            					<a class="area" role="button" href="#nodejs-articles" data-parent="#main-nav" data-toggle="collapse">Node.js / JavaScript</a>
            					<ul id = "nodejs-articles" class="collapse ">
            					
            						<li >
            							<a href = "/docs/nodejs/working-with-javascript" > Working with JavaScript</a>
            						</li>
            					
            						<li >
            							<a href = "/docs/nodejs/nodejs-tutorial" > Node.js Tutorial</a>
               						</li>
            					
            						<li >
            							<a href = "/docs/nodejs/nodejs-debugging" > Node.js Debugging</a>
               						</li>
            					
            						<li >
            							<a href = "/docs/nodejs/nodejs-deployment" > Node.js Deployment</a>
               						</li>
            					
            						<li >
            							<a href = "/docs/nodejs/browser-debugging" > Browser Debugging</a>
               						</li>
            					
            						<li >
            							<a href = "/docs/nodejs/angular-tutorial" > Angular Tutorial</a>
               						</li>
            					
            						<li >
            							<a href = "/docs/nodejs/reactjs-tutorial" > React Tutorial</a>
               						</li>
            					
            						<li >
            							<a href = "/docs/nodejs/vuejs-tutorial" > Vue Tutorial</a>
               						</li>
            					
            						<li >
            							<a href = "/docs/nodejs/emberjs-tutorial" > Ember Tutorial</a>
               						</li>
            					
            						<li >
            							<a href = "/docs/nodejs/debugging-recipes" > Debugging Recipes</a>
               						</li>
            					
            						<li >
            							<a href = "/docs/nodejs/extensions" > Extensions </ a >
   
                                       </ li >
   

                                   </ ul >
   
                               </ li >
   



                               < li class="panel collapsed">
            					<a class="area" role="button" href="#typescript-articles" data-parent="#main-nav" data-toggle="collapse">TypeScript</a>
            					<ul id = "typescript-articles" class="collapse ">
            					
            						<li >
            							<a href = "/docs/typescript/typescript-tutorial" > Tutorial </ a >

                                    </ li >


                                    < li >

                                        < a href="/docs/typescript/typescript-compiling" >Compiling</a>
            						</li>
            					
            						<li >
            							<a href = "/docs/typescript/typescript-debugging" > Debugging </ a >

                                    </ li >


                                </ ul >

                            </ li >




                            < li class="panel collapsed">
            					<a class="area" role="button" href="#python-articles" data-parent="#main-nav" data-toggle="collapse">Python</a>
            					<ul id = "python-articles" class="collapse ">
            					
            						<li >
            							<a href = "/docs/python/python-tutorial" > Tutorial </ a >

                                    </ li >


                                    < li >

                                        < a href="/docs/python/editing" >Editing Code</a>
            						</li>
            					
            						<li >
            							<a href = "/docs/python/linting" > Linting </ a >
 
                                     </ li >
 

                                     < li >
 
                                         < a href= "/docs/python/debugging" > Debugging </ a >
 
                                     </ li >
 

                                     < li >
 
                                         < a href= "/docs/python/environments" > Environments </ a >
 
                                     </ li >
 

                                     < li >
 
                                         < a href= "/docs/python/testing" > Testing </ a >
 
                                     </ li >
 

                                     < li >
 
                                         < a href= "/docs/python/data-science" > Data Science</a>
             						</li>
            					
            						<li >
            							<a href = "/docs/python/jupyter-support-py" > Python Interactive</a>
             						</li>
            					
            						<li >
            							<a href = "/docs/python/tutorial-django" > Django Tutorial</a>
             						</li>
            					
            						<li >
            							<a href = "/docs/python/tutorial-flask" > Flask Tutorial</a>
             						</li>
            					
            						<li >
            							<a href = "/docs/python/tutorial-create-containers" > Create containers</a>
             						</li>
            					
            						<li >
            							<a href = "/docs/python/python-on-azure" > Python on Azure</a>
            						</li>
            					
            						<li >
            							<a href = "/docs/python/settings-reference" > Settings Reference</a>
             						</li>
            					
            					</ul>
            				</li>
            			
            		
            			
            				<li class="panel collapsed">
            					<a class="area" role="button" href="#java-articles" data-parent="#main-nav" data-toggle="collapse">Java</a>
            					<ul id = "java-articles" class="collapse ">
            					
            						<li >
            							<a href = "/docs/java/java-tutorial" > Getting Started</a>
            						</li>
            					
            						<li >
            							<a href = "/docs/java/java-editing" > Navigate and Edit</a>
            						</li>
            					
            						<li >
            							<a href = "/docs/java/java-refactoring" > Refactoring </ a >
   
                                       </ li >
   

                                       < li >
   
                                           < a href= "/docs/java/java-linting" > Formatting and Linting</a>
            						</li>
            					
            						<li >
            							<a href = "/docs/java/java-project" > Project Management</a>
               						</li>
            					
            						<li >
            							<a href = "/docs/java/java-build" > Build Tools</a>
               						</li>
            					
            						<li >
            							<a href = "/docs/java/java-debugging" > Run and Debug</a>
            						</li>
            					
            						<li >
            							<a href = "/docs/java/java-testing" > Testing </ a >
   
                                       </ li >
   

                                       < li >
   
                                           < a href= "/docs/java/java-spring-boot" > Spring Boot</a>
               						</li>
            					
            						<li >
            							<a href = "/docs/java/java-tomcat-jetty" > Application Servers</a>
               						</li>
            					
            						<li >
            							<a href = "/docs/java/java-on-azure" > Java on Azure</a>
            						</li>
            					
            						<li >
            							<a href = "/docs/java/java-gui" > GUI Applications</a>
               						</li>
            					
            						<li >
            							<a href = "/docs/java/extensions" > Extensions </ a >
   
                                       </ li >
   

                                       < li >
   
                                           < a href= "/docs/java/java-faq" > FAQ </ a >
   
                                       </ li >
   

                                   </ ul >
   
                               </ li >
   



                               < li class="panel collapsed">
            					<a class="area" role="button" href="#cpp-articles" data-parent="#main-nav" data-toggle="collapse">C++</a>
            					<ul id = "cpp-articles" class="collapse ">
            					
            						<li >
            							<a href = "/docs/cpp/introvideos-cpp" > Intro Videos</a>
            						</li>
            					
            						<li >
            							<a href = "/docs/cpp/config-linux" > GCC on Linux</a>
            						</li>
            					
            						<li >
            							<a href = "/docs/cpp/config-mingw" > GCC on Windows</a>
            						</li>
            					
            						<li >
            							<a href = "/docs/cpp/config-wsl" > GCC on Windows Subsystem for Linux</a>
               						</li>
            					
            						<li >
            							<a href = "/docs/cpp/config-clang-mac" > Clang on macOS</a>
            						</li>
            					
            						<li >
            							<a href = "/docs/cpp/config-msvc" > Microsoft C++ on Windows</a>
            						</li>
            					
            						<li >
            							<a href = "/docs/cpp/build-with-cmake" > Build with CMake</a>
            						</li>
            					
            						<li >
            							<a href = "/docs/cpp/cmake-linux" > CMake Tools on Linux</a>
               						</li>
            					
            						<li >
            							<a href = "/docs/cpp/cpp-debug" > Debugging </ a >
   
                                       </ li >
   

                                       < li >
   
                                           < a href= "/docs/cpp/cpp-ide" > Editing </ a >
   
                                       </ li >
   

                                       < li >
   
                                           < a href= "/docs/cpp/customize-default-settings-cpp" > Settings </ a >
   
                                       </ li >
   

                                       < li >
   
                                           < a href= "/docs/cpp/configure-intellisense-crosscompilation" > Configure IntelliSense for cross-compiling</a>
               						</li>
            					
            						<li >
            							<a href = "/docs/cpp/faq-cpp" > FAQ </ a >
   
                                       </ li >
   

                                   </ ul >
   
                               </ li >
   



                               < li class="panel collapsed">
            					<a class="area" role="button" href="#containers-articles" data-parent="#main-nav" data-toggle="collapse">Containers</a>
            					<ul id = "containers-articles" class="collapse ">
            					
            						<li >
            							<a href = "/docs/containers/overview" > Overview </ a >

                                    </ li >


                                    < li >

                                        < a href="/docs/containers/quickstart-node" >Node.js</a>
            						</li>
            					
            						<li >
            							<a href = "/docs/containers/quickstart-python" > Python </ a >

                                    </ li >


                                    < li >

                                        < a href="/docs/containers/quickstart-aspnet-core" >ASP.NET Core</a>
            						</li>
            					
            						<li >
            							<a href = "/docs/containers/debug-common" > Debug </ a >
 
                                     </ li >
 

                                     < li >
 
                                         < a href= "/docs/containers/docker-compose" > Docker Compose</a>
             						</li>
            					
            						<li >
            							<a href = "/docs/containers/quickstart-container-registries" > Registries </ a >
 
                                     </ li >
 

                                     < li >
 
                                         < a href= "/docs/containers/app-service" > Deploy to Azure</a>
            						</li>
            					
            						<li >
            							<a href = "/docs/containers/choosing-dev-environment" > Choose a dev environment</a>
             						</li>
            					
            						<li >
            							<a href = "/docs/containers/reference" > Customize </ a >
 
                                     </ li >
 

                                     < li >
 
                                         < a href= "/docs/containers/bridge-to-kubernetes" > Develop with Kubernetes</a>
            						</li>
            					
            						<li >
            							<a href = "/docs/containers/troubleshooting" > Tips and Tricks</a>
            						</li>
            					
            					</ul>
            				</li>
            			
            		
            			
            				<li class="panel collapsed">
            					<a class="area" role="button" href="#datascience-articles" data-parent="#main-nav" data-toggle="collapse">Data Science</a>
            					<ul id = "datascience-articles" class="collapse ">
            					
            						<li >
            							<a href = "/docs/datascience/overview" > Overview </ a >

                                    </ li >


                                    < li >

                                        < a href="/docs/datascience/jupyter-notebooks" >Jupyter Notebooks</a>
            						</li>
            					
            						<li >
            							<a href = "/docs/datascience/data-science-tutorial" > Data Science Tutorial</a>
            						</li>
            					
            						<li >
            							<a href = "/docs/datascience/python-interactive" > Python Interactive</a>
             						</li>
            					
            						<li >
            							<a href = "/docs/datascience/pytorch-support" > PyTorch Support</a>
             						</li>
            					
            						<li >
            							<a href = "/docs/datascience/azure-machine-learning" > Azure Machine Learning</a>
            						</li>
            					
            					</ul>
            				</li>
            			
            		
            			
            				<li class="panel collapsed">
            					<a class="area" role="button" href="#azure-articles" data-parent="#main-nav" data-toggle="collapse">Azure</a>
            					<ul id = "azure-articles" class="collapse ">
            					
            						<li >
            							<a href = "/docs/azure/extensions" > Extensions </ a >

                                    </ li >


                                    < li >

                                        < a href="/docs/azure/deployment" >Deployment</a>
            						</li>
            					
            						<li >
            							<a href = "/docs/azure/remote-debugging" > Remote Debugging for Node.js</a>
            						</li>
            					
            						<li >
            							<a href = "/docs/azure/docker" > Docker </ a >

                                    </ li >


                                    < li >

                                        < a href="/docs/azure/mongodb" >MongoDB</a>
            						</li>
            					
            						<li >
            							<a href = "/docs/azure/kubernetes" > Kubernetes </ a >

                                    </ li >


                                </ ul >

                            </ li >




                            < li class="panel collapsed">
            					<a class="area" role="button" href="#remote-articles" data-parent="#main-nav" data-toggle="collapse">Remote</a>
            					<ul id = "remote-articles" class="collapse ">
            					
            						<li >
            							<a href = "/docs/remote/remote-overview" > Overview </ a >

                                    </ li >


                                    < li >

                                        < a href="/docs/remote/ssh" >SSH</a>
            						</li>
            					
            						<li >
            							<a href = "/docs/remote/containers" > Containers </ a >

                                    </ li >


                                    < li >

                                        < a href="/docs/remote/wsl" >Windows Subsystem for Linux</a>
            						</li>
            					
            						<li >
            							<a href = "/docs/remote/codespaces" > GitHub Codespaces</a>
            						</li>
            					
            						<li >
            							<a href = "/docs/remote/ssh-tutorial" > SSH Tutorial</a>
            						</li>
            					
            						<li >
            							<a href = "/docs/remote/containers-tutorial" > Containers Tutorial</a>
            						</li>
            					
            						<li >
            							<a href = "/docs/remote/wsl-tutorial" > WSL Tutorial</a>
            						</li>
            					
            						<li >
            							<a href = "/docs/remote/attach-container" > Attach to Container</a>
            						</li>
            					
            						<li >
            							<a href = "/docs/remote/create-dev-container" > Create a Dev Container</a>
               						</li>
            					
            						<li >
            							<a href = "/docs/remote/containers-advanced" > Advanced Containers</a>
               						</li>
            					
            						<li >
            							<a href = "/docs/remote/devcontainer-cli" > devcontainer CLI</a>
               						</li>
            					
            						<li >
            							<a href = "/docs/remote/devcontainerjson-reference" > devcontainer.json </ a >
   
                                       </ li >
   

                                       < li >
   
                                           < a href= "/docs/remote/troubleshooting" > Tips and Tricks</a>
            						</li>
            					
            						<li >
            							<a href = "/docs/remote/faq" > FAQ </ a >
   
                                       </ li >
   

                                   </ ul >
   
                               </ li >
   




                   </ ul >
   
               </ nav >
   
               < nav id= "small-nav" aria-label= "Topics" class="docs-nav hidden-md hidden-lg">
            	<h4>Topics</h4>
            	<select id = "small-nav-dropdown" >

                    < option value="/docs" >Overview</option>
            		
            			
            		
            			
            				<optgroup label = "Setup" >


                                < option value="/docs/setup/setup-overview" >Overview</option>
            				
            					<option value = "/docs/setup/linux" > Linux </ option >


                                < option value="/docs/setup/mac" >macOS</option>
            				
            					<option value = "/docs/setup/windows" > Windows </ option >


                                < option value="/docs/setup/raspberry-pi" >Raspberry Pi</option>
            				
            					<option value = "/docs/setup/network" > Network </ option >
 

                                 < option value= "/docs/setup/additional-components" > Additional Components</option>
             				
            					<option value = "/docs/setup/uninstall" > Uninstall </ option >
 

                             </ optgroup >
 



                             < optgroup label= "Get Started" >
 

                                 < option value= "/docs/getstarted/introvideos" > Intro Videos</option>
             				
            					<option value = "/docs/getstarted/tips-and-tricks" > Tips and Tricks</option>
            				
            					<option value = "/docs/getstarted/userinterface" > User Interface</option>
             				
            					<option value = "/docs/getstarted/themes" > Themes </ option >
 

                                 < option value= "/docs/getstarted/settings" > Settings </ option >
 

                                 < option value= "/docs/getstarted/keybindings" > Key Bindings</option>
             				
            					<option value = "/docs/getstarted/locales" > Display Language</option>
             				
            					<option value = "/docs/getstarted/telemetry" selected>Telemetry</option>
             				
            				</optgroup>
            			
            		
            			
            				<optgroup label = "User Guide" >
 

                                 < option value= "/docs/editor/codebasics" > Basic Editing</option>
             				
            					<option value = "/docs/editor/extension-marketplace" > Extension Marketplace</option>
             				
            					<option value = "/docs/editor/intellisense" > IntelliSense </ option >
 

                                 < option value= "/docs/editor/editingevolved" > Code Navigation</option>
             				
            					<option value = "/docs/editor/refactoring" > Refactoring </ option >
 

                                 < option value= "/docs/editor/debugging" > Debugging </ option >
 

                                 < option value= "/docs/editor/versioncontrol" > Version Control</option>
             				
            					<option value = "/docs/editor/github" > Working with GitHub</option>
            				
            					<option value = "/docs/editor/vscode-web" > VS Code for the Web</option>
            				
            					<option value = "/docs/editor/integrated-terminal" > Integrated Terminal</option>
             				
            					<option value = "/docs/editor/tasks" > Tasks </ option >
 

                                 < option value= "/docs/editor/settings-sync" > Settings Sync</option>
             				
            					<option value = "/docs/editor/userdefinedsnippets" > Snippets </ option >
 

                                 < option value= "/docs/editor/emmet" > Emmet </ option >
 

                                 < option value= "/docs/editor/command-line" > Command Line</option>
             				
            					<option value = "/docs/editor/workspace-trust" > Workspace Trust</option>
             				
            					<option value = "/docs/editor/multi-root-workspaces" > Multi - root Workspaces</option>
             				
            					<option value = "/docs/editor/accessibility" > Accessibility </ option >
 

                             </ optgroup >
 



                             < optgroup label= "Languages" >
 

                                 < option value= "/docs/languages/overview" > Overview </ option >
 

                                 < option value= "/docs/languages/javascript" > JavaScript </ option >
 

                                 < option value= "/docs/languages/json" > JSON </ option >
 

                                 < option value= "/docs/languages/html" > HTML </ option >
 

                                 < option value= "/docs/languages/css" > CSS, SCSS and Less</option>
             				
            					<option value = "/docs/languages/typescript" > TypeScript </ option >
 

                                 < option value= "/docs/languages/markdown" > Markdown </ option >
 

                                 < option value= "/docs/languages/powershell" > PowerShell </ option >
 

                                 < option value= "/docs/languages/cpp" > C++ </ option >
 

                                 < option value= "/docs/languages/java" > Java </ option >
 

                                 < option value= "/docs/languages/php" > PHP </ option >
 

                                 < option value= "/docs/languages/python" > Python </ option >
 

                                 < option value= "/docs/languages/julia" > Julia </ option >
 

                                 < option value= "/docs/languages/r" > R </ option >
 

                                 < option value= "/docs/languages/go" > Go </ option >
 

                                 < option value= "/docs/languages/tsql" > T - SQL </ option >
 

                                 < option value= "/docs/languages/csharp" > C#</option>
            				
            					< option value= "/docs/languages/dotnet" >.NET Core</option>
             				
            				</optgroup>
            			
            		
            			
            				<optgroup label = "Node.js / JavaScript" >
 

                                 < option value= "/docs/nodejs/working-with-javascript" > Working with JavaScript</option>
            				
            					<option value = "/docs/nodejs/nodejs-tutorial" > Node.js Tutorial</option>
             				
            					<option value = "/docs/nodejs/nodejs-debugging" > Node.js Debugging</option>
             				
            					<option value = "/docs/nodejs/nodejs-deployment" > Node.js Deployment</option>
             				
            					<option value = "/docs/nodejs/browser-debugging" > Browser Debugging</option>
             				
            					<option value = "/docs/nodejs/angular-tutorial" > Angular Tutorial</option>
             				
            					<option value = "/docs/nodejs/reactjs-tutorial" > React Tutorial</option>
             				
            					<option value = "/docs/nodejs/vuejs-tutorial" > Vue Tutorial</option>
             				
            					<option value = "/docs/nodejs/emberjs-tutorial" > Ember Tutorial</option>
             				
            					<option value = "/docs/nodejs/debugging-recipes" > Debugging Recipes</option>
             				
            					<option value = "/docs/nodejs/extensions" > Extensions </ option >
 

                             </ optgroup >
 



                             < optgroup label= "TypeScript" >
 

                                 < option value= "/docs/typescript/typescript-tutorial" > Tutorial </ option >
 

                                 < option value= "/docs/typescript/typescript-compiling" > Compiling </ option >
 

                                 < option value= "/docs/typescript/typescript-debugging" > Debugging </ option >
 

                             </ optgroup >
 



                             < optgroup label= "Python" >
 

                                 < option value= "/docs/python/python-tutorial" > Tutorial </ option >
 

                                 < option value= "/docs/python/editing" > Editing Code</option>
             				
            					<option value = "/docs/python/linting" > Linting </ option >
 

                                 < option value= "/docs/python/debugging" > Debugging </ option >
 

                                 < option value= "/docs/python/environments" > Environments </ option >
 

                                 < option value= "/docs/python/testing" > Testing </ option >
 

                                 < option value= "/docs/python/data-science" > Data Science</option>
             				
            					<option value = "/docs/python/jupyter-support-py" > Python Interactive</option>
             				
            					<option value = "/docs/python/tutorial-django" > Django Tutorial</option>
             				
            					<option value = "/docs/python/tutorial-flask" > Flask Tutorial</option>
             				
            					<option value = "/docs/python/tutorial-create-containers" > Create containers</option>
             				
            					<option value = "/docs/python/python-on-azure" > Python on Azure</option>
            				
            					<option value = "/docs/python/settings-reference" > Settings Reference</option>
             				
            				</optgroup>
            			
            		
            			
            				<optgroup label = "Java" >
 

                                 < option value= "/docs/java/java-tutorial" > Getting Started</option>
             				
            					<option value = "/docs/java/java-editing" > Navigate and Edit</option>
            				
            					<option value = "/docs/java/java-refactoring" > Refactoring </ option >
 

                                 < option value= "/docs/java/java-linting" > Formatting and Linting</option>
            				
            					<option value = "/docs/java/java-project" > Project Management</option>
             				
            					<option value = "/docs/java/java-build" > Build Tools</option>
             				
            					<option value = "/docs/java/java-debugging" > Run and Debug</option>
            				
            					<option value = "/docs/java/java-testing" > Testing </ option >
 

                                 < option value= "/docs/java/java-spring-boot" > Spring Boot</option>
             				
            					<option value = "/docs/java/java-tomcat-jetty" > Application Servers</option>
             				
            					<option value = "/docs/java/java-on-azure" > Java on Azure</option>
            				
            					<option value = "/docs/java/java-gui" > GUI Applications</option>
             				
            					<option value = "/docs/java/extensions" > Extensions </ option >
 

                                 < option value= "/docs/java/java-faq" > FAQ </ option >
 

                             </ optgroup >
 



                             < optgroup label= "C++" >
 

                                 < option value= "/docs/cpp/introvideos-cpp" > Intro Videos</option>
             				
            					<option value = "/docs/cpp/config-linux" > GCC on Linux</option>
            				
            					<option value = "/docs/cpp/config-mingw" > GCC on Windows</option>
            				
            					<option value = "/docs/cpp/config-wsl" > GCC on Windows Subsystem for Linux</option>
             				
            					<option value = "/docs/cpp/config-clang-mac" > Clang on macOS</option>
            				
            					<option value = "/docs/cpp/config-msvc" > Microsoft C++ on Windows</option>
            				
            					<option value = "/docs/cpp/build-with-cmake" > Build with CMake</option>
            				
            					<option value = "/docs/cpp/cmake-linux" > CMake Tools on Linux</option>
             				
            					<option value = "/docs/cpp/cpp-debug" > Debugging </ option >
 

                                 < option value= "/docs/cpp/cpp-ide" > Editing </ option >
 

                                 < option value= "/docs/cpp/customize-default-settings-cpp" > Settings </ option >
 

                                 < option value= "/docs/cpp/configure-intellisense-crosscompilation" > Configure IntelliSense for cross-compiling</option>
             				
            					<option value = "/docs/cpp/faq-cpp" > FAQ </ option >
 

                             </ optgroup >
 



                             < optgroup label= "Containers" >
 

                                 < option value= "/docs/containers/overview" > Overview </ option >
 

                                 < option value= "/docs/containers/quickstart-node" > Node.js </ option >
 

                                 < option value= "/docs/containers/quickstart-python" > Python </ option >
 

                                 < option value= "/docs/containers/quickstart-aspnet-core" > ASP.NET Core</option>
             				
            					<option value = "/docs/containers/debug-common" > Debug </ option >
 

                                 < option value= "/docs/containers/docker-compose" > Docker Compose</option>
             				
            					<option value = "/docs/containers/quickstart-container-registries" > Registries </ option >
 

                                 < option value= "/docs/containers/app-service" > Deploy to Azure</option>
            				
            					<option value = "/docs/containers/choosing-dev-environment" > Choose a dev environment</option>
             				
            					<option value = "/docs/containers/reference" > Customize </ option >
 

                                 < option value= "/docs/containers/bridge-to-kubernetes" > Develop with Kubernetes</option>
            				
            					<option value = "/docs/containers/troubleshooting" > Tips and Tricks</option>
            				
            				</optgroup>
            			
            		
            			
            				<optgroup label = "Data Science" >
 

                                 < option value= "/docs/datascience/overview" > Overview </ option >
 

                                 < option value= "/docs/datascience/jupyter-notebooks" > Jupyter Notebooks</option>
             				
            					<option value = "/docs/datascience/data-science-tutorial" > Data Science Tutorial</option>
            				
            					<option value = "/docs/datascience/python-interactive" > Python Interactive</option>
             				
            					<option value = "/docs/datascience/pytorch-support" > PyTorch Support</option>
             				
            					<option value = "/docs/datascience/azure-machine-learning" > Azure Machine Learning</option>
            				
            				</optgroup>
            			
            		
            			
            				<optgroup label = "Azure" >
 

                                 < option value= "/docs/azure/extensions" > Extensions </ option >
 

                                 < option value= "/docs/azure/deployment" > Deployment </ option >
 

                                 < option value= "/docs/azure/remote-debugging" > Remote Debugging for Node.js</option>
             				
            					<option value = "/docs/azure/docker" > Docker </ option >
 

                                 < option value= "/docs/azure/mongodb" > MongoDB </ option >
 

                                 < option value= "/docs/azure/kubernetes" > Kubernetes </ option >
 

                             </ optgroup >
 



                             < optgroup label= "Remote" >
 

                                 < option value= "/docs/remote/remote-overview" > Overview </ option >
 

                                 < option value= "/docs/remote/ssh" > SSH </ option >
 

                                 < option value= "/docs/remote/containers" > Containers </ option >
 

                                 < option value= "/docs/remote/wsl" > Windows Subsystem for Linux</option>
             				
            					<option value = "/docs/remote/codespaces" > GitHub Codespaces</option>
             				
            					<option value = "/docs/remote/ssh-tutorial" > SSH Tutorial</option>
             				
            					<option value = "/docs/remote/containers-tutorial" > Containers Tutorial</option>
             				
            					<option value = "/docs/remote/wsl-tutorial" > WSL Tutorial</option>
             				
            					<option value = "/docs/remote/attach-container" > Attach to Container</option>
            				
            					<option value = "/docs/remote/create-dev-container" > Create a Dev Container</option>
             				
            					<option value = "/docs/remote/containers-advanced" > Advanced Containers</option>
             				
            					<option value = "/docs/remote/devcontainer-cli" > devcontainer CLI</option>
             				
            					<option value = "/docs/remote/devcontainerjson-reference" > devcontainer.json </ option >
 

                                 < option value= "/docs/remote/troubleshooting" > Tips and Tricks</option>
            				
            					<option value = "/docs/remote/faq" > FAQ </ option >
 

                             </ optgroup >
 




                 </ select >
 
             </ nav >        </ div >
 
         < div class="col-sm-9 col-md-8 body">
            <div class="edit-github pull-right">
                <a href = "https://vscode.dev/github/microsoft/vscode-docs/blob/main/docs/getstarted/telemetry.md"
                    tabindex="-1">
                    <button type = "button" class="btn btn-default" role="presentation" title="Edit this document in vscode.dev"><span
                            class="glyphicon glyphicon-pencil"></span><i>&nbsp;</i><span
                            class="hidden-xs">Edit</span></button>
                </a>
            </div>
            <h1>Telemetry</h1>
<p>Visual Studio Code collects telemetry data, which is used to help understand how to improve the product.For example, this usage data helps to debug issues, such as slow start-up times, and to prioritize new features.While we appreciate the insights this data provides, we also know that not everyone wants to send usage data and you can disable telemetry as described in <a href = "#_disable-telemetry-reporting" > disable telemetry reporting</a>. You can also read our<a href="https://go.microsoft.com/fwlink/?LinkID=528096&amp;clcid=0x409" class="external-link" target="_blank">privacy statement</a> to learn more.</p>
<h2 id = "_types-of-telemetry-data" data-needslink= "_types-of-telemetry-data" > Types of telemetry data</h2>
<p>VS Code and this page refer to three different types of data with respect to telemetry.</p>
<p><strong>Crash Reports</strong> - Crash reports collect diagnostic information when VS Code crashes and sends it to Microsoft to help understand why the crash occurred and what changes are needed to prevent the crash in the future.</p>
<p><strong>Error Telemetry</strong> - Error telemetry collects information about errors that do not crash the application but are unexpected.</p>
<p><strong>Usage Data</strong> - Usage data collects information about how features are used and perform in VS Code which helps us prioritize future product improvements.</p>
<h2 id = "_disable-telemetry-reporting" data-needslink= "_disable-telemetry-reporting" > Disable telemetry reporting</h2>
<p>With the <code>telemetry.telemetryLevel</code> user <a href = "/docs/getstarted/settings" > setting </ a >, you can control the different types of telemetry we send with a single setting. Here is a table of the different types of data sent with each value of<code> telemetry.telemetryLevel</code>:</p>
<table class="table table-striped">
<thead>
<tr>
<th style = "text-align:left" ></ th >
< th style="text-align:center">Crash Reports</th>
<th style = "text-align:center" > Error Telemetry</th>
 <th style = "text-align:center" > Usage Data</th>
 </tr>
</thead>
<tbody>
<tr>
<td style = "text-align:left" > all </ td >
 < td style= "text-align:center" >✓</td>
<td style = "text-align:center" >✓</td>
<td style = "text-align:center" >✓</td>
</tr>
<tr>
<td style = "text-align:left" > error </ td >
 < td style= "text-align:center" >✓</td>
<td style = "text-align:center" >✓</td>
<td style = "text-align:center" > -</ td >
 </ tr >
 < tr >
 < td style= "text-align:left" > crash </ td >
 < td style= "text-align:center" >✓</td>
<td style = "text-align:center" > -</ td >
 < td style= "text-align:center" > -</ td >
 </ tr >
 < tr >
 < td style= "text-align:left" > off </ td >
 < td style= "text-align:center" > -</ td >
 < td style= "text-align:center" > -</ td >
 < td style= "text-align:center" > -</ td >
 </ tr >
 </ tbody >
 </ table >
 < p > For example, if you don't want to send any telemetry data to Microsoft, you can set the <code>telemetry.telemetryLevel</code> user <a href="/docs/getstarted/settings">setting</a> to <code>off</code>.</p>
<p>From<strong> File</strong> &gt; <strong>Preferences</strong> &gt; <strong>Settings</strong>(macOS: <strong>Code</strong> &gt; <strong>Preferences</strong> &gt; <strong>Settings</strong>), search for <code>telemetry</code>, and set the<strong> Telemetry: Telemetry Level</strong> setting to <code>off</code>.This will silence all telemetry events from VS Code going forward.Telemetry information may have been collected and sent up until the point when you disable the setting.</p>
<p><img src = "/assets/docs/getstarted/telemetry/disable-telemetry.png" alt= "disable telemetry" loading= "lazy" ></ p >
< p > If you use the JSON editor for your settings, add the following line:</p>
<pre class="shiki" style="background-color: #FFFFFF"><code><span style = "color: #000000" >    </ span >< span style="color: #A31515">"telemetry.telemetryLevel"</span><span style = "color: #000000" >: </span><span style = "color: #A31515" > "off" </ span ></ code ></ pre >
         < h2 id="_extensions-and-telemetry" data-needslink="_extensions-and-telemetry">Extensions and telemetry</h2>
<p>VS Code lets you add features to the product by installing Microsoft and third-party extensions.These extensions may be collecting their own usage data and are not controlled by the <code>telemetry.telemetryLevel</code> setting. Consult the specific extension's documentation to learn about its telemetry reporting and whether it can be disabled.</p>
<p>Extension authors may refer to the <a href = "#_for-extension-authors" > &quot; For Extension Authors&quot;</a> section for guidance on implementing telemetry best practices within their extension.</p>
<h2 id = "_output-channel-for-telemetry-events" data-needslink="_output-channel-for-telemetry-events">Output channel for telemetry events</h2>
<p>If you'd like to review the telemetry events in VS Code as they are sent, you can enable tracing and it will record telemetry events. Set the log level to <strong>Trace</strong> using the <strong>Developer: Set Log Level...</strong> command and then in the Output panel (<span class="dynamic-keybinding" data-commandId="workbench.action.output.toggleOutput" data-osx="⇧⌘U" data-win="Ctrl+Shift+U" data-linux="Ctrl+K Ctrl+H"><span class="keybinding">⇧⌘U</span> (Windows <span class="keybinding">Ctrl+Shift+U</span>, Linux <span class="keybinding">Ctrl+K Ctrl+H</span>)</span>), pick <strong>Log (Telemetry)</strong> from the dropdown.</p>
<p><img src = "/assets/docs/getstarted/telemetry/output-log-telemetry.png" alt= "output panel log telemetry" loading= "lazy" ></ p >
  < p > When tracing telemetry events, the events are also logged to a local file<code> telemetry.log</code>, which you can view using the<strong> Developer: Open Log File...</strong> command and choosing <strong>Telemetry</strong> from the dropdown.</p>
<p><img src="/assets/docs/getstarted/telemetry/open-telemetry-log.png" alt="open telemetry log file" loading="lazy"></p>
<h2 id="_viewing-all-telemetry-events" data-needslink="_viewing-all-telemetry-events">Viewing all telemetry events</h2>
<p>If you'd like to view all the possible telemetry events that VS Code could send, you can use the <code>--telemetry</code> flag in the CLI. This will generate a JSON report that you can then view within VS Code. These reports are generated per build and do not contain extension telemetry unless the extension author adds a <code>telemetry.json</code> file to their root build directory.</p>
<p>For example, running <code>code --telemetry &gt; telemetry.json & amp; &amp; code telemetry.json</code> will create a<code> telemetry.json</code> file in your current working directory and then open it in VS Code. You cannot pipe the output like this, <code>code --telemetry | code -</code>, due to the length of the telemetry report.</p>
<h2 id = "_gdpr-and-vs-code" data-needslink= "_gdpr-and-vs-code" > GDPR and VS Code</h2>
  <p>In addition to supporting the General Data Protection Regulation (GDPR), the VS Code team takes privacy very seriously. That's both for Microsoft as a company and specifically within the VS Code team.</p>
<p>To ensure GDPR compliance, we made several updates to VS Code, these include:</p>
<ul>
<li>Making it easier to opt out of telemetry collection by placing a notification in product for all existing and new users.</ li >
< li > Reviewing and classifying the telemetry that we send (documented in <a href="https://github.com/microsoft/vscode/pull/34997" class= "external-link" target = "_blank" > our OSS codebase</a>).</ li >
        < li > Ensuring that we have valid data retention policies in place for any data we do collect, for example crash dumps.</li>
</ul>
<p>In short, we have worked hard to do the right thing, for all users, as these practices apply to all geographies, not just Europe.</p>
<p>One question we expect people to ask is to see the data we collect. However, we don't have a reliable way to do this as VS Code does not have a 'sign-in' experience that would uniquely identify a user.  We do send information that helps us approximate a single user for diagnostic purposes (this is based on a hash of the network adapter NIC on the desktop and a randomly assigned UUID on the web) but this is not guaranteed to be unique. For example, virtual machines (VMs) often rotate NIC IDs or allocate from a pool. This technique is sufficient to help us when working through problems, but it is not reliable enough for us to 'provide your data'.</p>
<p>We expect our approach to evolve as we learn more about GDPR and the expectations of our users. We greatly appreciate the data users do send to us, as it is very valuable and VS Code is a better product for everyone because of it. And again, if you are worried about privacy, we offer the ability to disable sending telemetry as described in <a href="/docs/getstarted/telemetry#_disable-telemetry-reporting">disable telemetry reporting</a>.</p>
<p>You can find more information about how the Visual Studio family approaches GDPR at <a href="https://docs.microsoft.com/microsoft-365/compliance/gdpr-dsr-visual-studio-family" class= "external-link" target = "_blank" > Visual Studio Family Data Subject Requests for the GDPR</a>.</p>
<h2 id="_managing-online-services" data-needslink="_managing-online-services">Managing online services</h2>
<p>Beyond crash reporting and telemetry, VS Code uses online services for various other purposes such as downloading product updates, finding, installing, and updating extensions, Settings Sync, or providing Natural Language Search within the Settings editor. You can choose to turn on/off features that use these services.</p>
<p>Please note, that turning off these features does not put VS Code into offline mode. For example, if you search for extensions in the <strong>Extensions</strong> view, VS Code still searches the online VS Code Marketplace. The settings ensure that VS Code does not talk to online services without you requesting it.</p>
<p>From <strong>File</strong> &gt; < strong > Preferences </ strong > &gt; < strong > Settings </ strong > (macOS: < strong > Code </ strong > &gt; < strong > Preferences </ strong > &gt; < strong > Settings </ strong >), and type the tag <code>@tag:usesOnlineServices </ code >.This will display all settings that control the usage of online services and you can individually switch them on or off.</p>
<p><img src="/assets/docs/getstarted/telemetry/online-settings.png" alt="online settings filter" loading="lazy"></p>
<blockquote>
<p><strong>Note</strong>: VS Code extensions may also use online services and may not provide settings to configure the usage of these online services, or they may not register their settings to show up when searching for <code>@tag:usesOnlineServices </ code >.Consult the specific extension's documentation to learn about its usage of online services.</p>
</blockquote>
<h3 id="_nonmicrosoft-online-services-used-by-vs-code" data-needslink="_nonmicrosoft-online-services-used-by-vs-code">Non-Microsoft online services used by VS Code</h3>
<p>The built-in <strong>npm support for VS Code</strong> extension sends requests to <code>https://registry.npmjs.org</code> and <code>https://registry.bower.io</code>.</p>
< p > The built -in < strong > TypeScript and JavaScript Language Features</strong> extension queries the <code>@types</code> domain at <code>https://registry.npmjs.org</code>.</p>
< p > When you use<strong>Developer: Toggle Developer Tools</strong> or <strong>Developer: Open Webview Developer Tools</strong>, VS Code may talk to Google servers to fetch data needed to launch Developer Tools.</p>
<h2 id="_extension-recommendations" data-needslink="_extension-recommendations">Extension recommendations</h2>
<p>VS Code provides extension recommendations based on your file types, your workspace, and your environment. File type recommendations are either precomputed or dynamic. Workspace and environment recommendations are always precomputed.</p>
<p>If you want to know why an extension is being recommended, open the extension's detail page. You can find the recommendation reason in the page header.</p>
<p><img src="/assets/docs/getstarted/telemetry/extension-recommendation-based-on.png" alt="extension recommendation based on files" loading="lazy"></p>
<h3 id="_precomputed-recommendations" data-needslink="_precomputed-recommendations">Precomputed recommendations</h3>
<p>VS Code collects telemetry about which extensions are being activated for what file types and what workspaces/folders. Specific folders are identified by computing a hash of each of the folder's Git remotes.</p>
<p>We use this information to precompute anonymous recommendations. Precomputed recommendations are instructions that spell out under which conditions an extension should be recommended. For example, when we see an interesting correlation between two extensions A and B, one instruction might be: Recommend extension B if the user has installed extension A but not B.</p>
<p>Some precomputed recommendations are shipped as part of the product while additional precomputed recommendations are fetched at runtime from an online Microsoft service. VS Code independently evaluates and executes precomputed recommendations without sending any user information to any online service.</p>
<h3 id="_dynamic-recommendations" data-needslink="_dynamic-recommendations">Dynamic recommendations</h3>
<p>When you open a file type for which VS Code does not have any precomputed recommendation, it asks the Extension Marketplace for extensions that declare that they support this file type. If the query returns extensions you don't have installed, VS Code will provide a notification.</p>
<h2 id="_for-extension-authors" data-needslink="_for-extension-authors">For extension authors</h2>
<p>If you have created a VS Code extension, you can use the VS Code telemetry infrastructure for reporting through the <a href="https://www.npmjs.com/package/vscode-extension-telemetry" class= "external-link" target = "_blank" > vscode - extension - telemetry </ a > npm module.This module provides a consistent way for extensions to report telemetry over <a href="https://azure.microsoft.com/services/monitor/" class= "external-link" target = "_blank" > Azure Monitor and Application Insights</a>. The module respects the user's decision about whether or not to send telemetry data via the <code>telemetry.telemetryLevel</code> setting. Additionally, this module guarantees backwards compatability against previous versions of VS Code.</p>
<p>Follow this guide to set up <a href="https://docs.microsoft.com/azure/azure-monitor/learn/nodejs-quick-start" class= "external-link" target = "_blank" > Azure Monitor </ a > and get your Application Insights instrumentation key.</p>
<p>If you would prefer to not utilize the npm module, it is still recommended that extension authors respect the user's choice by utilizing the <code>isTelemetryEnabled</code> and <code>onDidChangeTelemetryEnabled</code> API.</p>
<p>Additionally, telemetry authors can add a <code>telemetry.json</code> file to their root build directory for their telemetry to show up in the <code>--telemetry</code> dump that VS Code produces.</p>
<h2 id="_next-steps" data-needslink="_next-steps">Next steps</h2>
<ul>
<li><a href="/docs/supporting/faq">Visual Studio Code FAQ</a> - Consult the Frequently Asked Questions to learn more.</li>
<li><a href="/docs/getstarted/settings">User and Workspace Settings</a> - Read about available options to customize VS Code.</li>
<li><a href="/docs/getstarted/keybindings">Key Bindings</a> - You can easily modify commonly used keyboard shortcuts.</li>
</ul>

            <div class= "feedback" ></ div >


            < div class= "body-footer" > 3 / 30 / 2022 </ div >
 

         </ div >
 
         < div class= "col-sm-3 col-md-2 docs-subnavbar-container" >
  
              < nav id = "docs-subnavbar" aria - label = "On Page" data - spy = "affix" data - offset - top = "20" >
             

                             < h4 >< span class= "sr-only" > In this article there are 10 sections</span><span
                        aria-hidden="true">In this article</span></h4>
                <ul class= "nav" >


                    < li >< a href = "#_types-of-telemetry-data" > Types of telemetry data</a></li>
                    
                    <li><a href="#_disable-telemetry-reporting">Disable telemetry reporting</a></li>
                    
                    <li><a href="#_extensions-and-telemetry">Extensions and telemetry</a></li>
                    
                    <li><a href="#_output-channel-for-telemetry-events">Output channel for telemetry events</a></li>
                    
                    <li><a href="#_viewing-all-telemetry-events">Viewing all telemetry events</a></li>
                    
                    <li><a href="#_gdpr-and-vs-code">GDPR and VS Code</a></li>
                    
                    <li><a href="#_managing-online-services">Managing online services</a></li>
                    
                    <li><a href="#_extension-recommendations">Extension recommendations</a></li>
                    
                    <li><a href="#_for-extension-authors">For extension authors</a></li>
                    
                    <li><a href="#_next-steps">Next steps</a></li>
                    
                </ul>
                
                <div class= "connect-widget" ></ div >
            </ nav >
        </ div >
    </ div >
</ div >
      </ div >
  </ div >

  < footer role = "contentinfo" >
 
       < div class= "container" >
  
            < div class= "row" >
   
                 < div class= "left col-md-7" >
    
                      < ul class= "links" >
     
                           < li >
     
                               < span class= "message" > Hello from Seattle.</ span >
         
                               </ li >
         
                               < li >
         
                                   < a href = "https://go.microsoft.com/fwlink/?LinkID=533687" onclick = "followOnTwitter()" tabindex = "0" > Follow @code </ a >
                  
                                        </ li >
                  
                                        < li >
                  
                                            < div class= "github-star-button" >
                   
                                                 < iframe src = "/assets/github-button.html?user=Microsoft&repo=vscode&type=star&count=true"
                                  frameborder = "0" scrolling = "0" width = "130px" height = "20px" title = "GitHub follow button" loading = "lazy" ></ iframe >
          
                                    </ div >
          
                                </ li >
          

                                < script >
                                    function followOnTwitter() {
    var windowFeatures = "location=yes,height=600,width=550,scrollbars=yes,status=yes";
    var originalReferer = "&original_referer=" + document.URL;
    var screenName = "&screen_name=code";
    var URL = "https://twitter.com/intent/follow?" + originalReferer + screenName;
    window.open(URL, "_blank", windowFeatures);
}

function manageConsent()
{
    if (WcpConsent.siteConsent.isConsentRequired)
    {
        WcpConsent.siteConsent.manageConsent();
    }
}
                      </ script >
                  </ ul >
              </ div >
              < div class= "right col-md-5" >
 
                   < ul class= "links" >
  
                        < li >< a id = "footer-support-link" href = "https://support.serviceshub.microsoft.com/supportforbusiness/create?sapId=d66407ed-3967-b000-4cfb-2c318cad363d"
                              target = "_blank" > Support </ a ></ li >
                      < li >< a id = "footer-privacy-link" href = "https://privacy.microsoft.com/privacystatement"
                              target = "_blank" > Privacy </ a ></ li >
                      < li style = "display: none;" >< a id = "footer-cookie-link" style = "cursor: pointer;" onclick = "manageConsent()"
                              target = "_blank" > Manage Cookies </ a ></ li >
    
                          < li >< a id = "footer-terms-link" href = "https://www.microsoft.com/legal/terms-of-use"
                              target = "_blank" > Terms of Use</a></li>
                      <li><a id = "footer-license-link" href= "/License" > License </ a ></ li >
    
                      </ ul >
    
                      < div class= "copyright" >
     
                           < a id = "footer-microsoft-link" class= "logo" href = "https://www.microsoft.com" >
         
                                   < img class= "microsoft-logo" src = "/assets/images/microsoft-logo.png" height = "20" alt = "Microsoft homepage" />
               
                                         < img class= "microsoft-logo-inverted" src = "/assets/images/microsoft-logo-inverted.png" height = "20" alt = "Microsoft homepage" />
                     
                                           </ a >
                     
                                           < span > &copy; 2022 Microsoft </ span >
                        
                                          </ div >
                        
                                      </ div >
                        
                                  </ div >
                        
                              </ div >
                        
                          </ footer >
                        
                          < script src = "/dist/index.js" ></ script >
                         



                           < script type = "application/ld+json" >
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
  </ script >
</ body >
</ html >
	}
}
