from flask import Flask, Response, render_template, request

app = Flask(__name__, template_folder='Templates')

@app.route('/')
def main():
	return render_template('frontend.html')
@app.route('/input', methods=['GET', 'POST'])



















if __name__== '__main__':
    app.run()