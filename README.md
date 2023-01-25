<h1 class="gap">0x11. C - printf</h1>
<p> <em>For this project, we expect you to look at these concepts:</em> </p>
<ul>
<li> <a href="">Group Projects</a> </li>
<li> <a href="">Pair Programming - How To</a> </li>
<li><a href="">Flowcharts</a> </li>
<li> <a href="">Technical Writing</a> </li>
</ul>

<h2>Background Context</h2>
<p>Write your own <code>printf</code> function.</p>
<h2>Resources</h2>

<p><strong>Read or watch</strong>:</p>

<ul>
<li><a href="https://www.academia.edu/10297206/Secrets_of_printf_" title="Secrets of printf" target="_blank">Secrets of printf</a> </li>
<li><strong>Group Projects</strong> concept page (<em>Don&rsquo;t forget to read this</em>)</li>
<li><strong>Flowcharts</strong> concept page</li>
</ul>

<p><strong>man or help</strong>:</p>

<ul>
<li><code>printf (3)</code></li>
</ul>

<h2>Requirements</h2>

<h3>General</h3>

<ul>
<li>Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code></li>
<li>All your files will be compiled on Ubuntu 20.04 LTS using <code>gcc</code>, using the options <code>-Wall -Werror -Wextra -pedantic -std=gnu89</code></li>
<li>All your files should end with a new line</li>
<li>A <code>README.md</code> file, at the root of the folder of the project is mandatory</li>
<li>Your code should use the <code>Betty</code> style. It will be checked using <a href="https://github.com/holbertonschool/Betty/blob/master/betty-style.pl" title="betty-style.pl" target="_blank">betty-style.pl</a> and <a href="https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl" title="betty-doc.pl" target="_blank">betty-doc.pl</a></li>
<li>You are not allowed to use global variables</li>
<li>No more than 5 functions per file</li>
<li>In the following examples, the <code>main.c</code> files are shown as examples. You can use them to test your functions, but you don&rsquo;t have to push them to your repo (if you do we won&rsquo;t take them into account). We will use our own <code>main.c</code> files at compilation. Our <code>main.c</code> files might be different from the one shown in the examples</li>
<li>The prototypes of all your functions should be included in your header file called <code>main.h</code></li>
<li>Don&rsquo;t forget to push your header file</li>
<li>All your header files should be include guarded</li>
<li>Note that we will not provide the <code>_putchar</code> function for this project</li>
</ul>

<h3>GitHub</h3>

<p><strong>There should be one project repository per group. The other members do not fork or clone the project to ensure only one of the team has the repository in their github account otherwise you risk scoring 0%</strong></p>

<h2>More Info</h2>

<h3>Authorized functions and macros</h3>

<ul>
<li><code>write</code> (<code>man 2 write</code>)</li>
<li><code>malloc</code> (<code>man 3 malloc</code>)</li>
<li><code>free</code> (<code>man 3 free</code>)</li>
<li><code>va_start</code> (<code>man 3 va_start</code>)</li>
<li><code>va_end</code> (<code>man 3 va_end</code>)</li>
<li><code>va_copy</code> (<code>man 3 va_copy</code>)</li>
<li><code>va_arg</code> (<code>man 3 va_arg</code>)</li>
</ul>

<h3>Compilation</h3>

<ul>
<li>Your code will be compiled this way:</li>
</ul>

<pre><code>$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
</code></pre>

<ul>
<li>As a consequence, be careful not to push any c file containing a <code>main</code> function in the root directory of your project (you could have a <code>test</code> folder containing all your tests files including <code>main</code> functions)</li>
<li>Our main files will include your main header file (<code>main.h</code>): <code>#include main.h</code></li>
<li>You might want to look at the gcc flag <code>-Wno-format</code> when testing with your <code>_printf</code> and the standard <code>printf</code>. Example of test file that you could use:</li>
</ul>
<ul>
<li>We strongly encourage you to work all together on a set of tests</li>
<li>If the task does not specify what to do with an edge case, do the same as <code>printf</code></li>
</ul>
<h3>Copyright - Plagiarism</h3>

<ul>
<li>You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.</li>
<li>You will not be able to meet the objectives of this or any following project by copying and pasting someone else&rsquo;s work. </li>
<li>You are not allowed to publish any content of this project.</li>
<li>Any form of plagiarism is strictly forbidden and will result in removal from the program.</li>
</ul>
<h3 class="panel-title">
      0. I&#39;m not going anywhere. You can print that wherever you want to. I&#39;m here and I&#39;m a Spur for life
 </h3>
<p>Write a function that produces output according to a format.</p>

<ul>
<li>Prototype: <code>int _printf(const char *format, ...);</code></li>
<li>Returns: the number of characters printed (excluding the null byte used to end output to strings)</li>
<li>write output to stdout, the standard output stream</li>
<li><code>format</code> is a character string. The format string is composed of zero or more directives. See <code>man 3 printf</code> for more detail. You need to handle the following conversion specifiers: 

<ul>
<li><code>c</code></li>
<li><code>s</code></li>
<li><code>%</code></li>
</ul></li>
<li>You don&rsquo;t have to reproduce the buffer handling of the C library <code>printf</code> function</li>
<li>You don&rsquo;t have to handle the flag characters</li>
<li>You don&rsquo;t have to handle field width</li>
<li>You don&rsquo;t have to handle precision</li>
<li>You don&rsquo;t have to handle the length modifiers</li>
</ul>
<h3 class="panel-title">
      1. Education is when you read the fine print. Experience is what you get if you don&#39;t
    </h3>
<p>Handle the following conversion specifiers:</p>

<ul>
<li><code>d</code></li>
<li><code>i</code></li>
<li>You don&rsquo;t have to handle the flag characters</li>
<li>You don&rsquo;t have to handle field width</li>
<li>You don&rsquo;t have to handle precision</li>
<li>You don&rsquo;t have to handle the length modifiers</li>
</ul>

