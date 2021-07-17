import io
from flask import Flask, Response, render_template, request

app = Flask(__name__, template_folder='templates')

@app.route('/')
def main():
	return render_template('frontend')
	#return "hello!"
#@app.route('/input', methods=['GET', 'POST'])

#does the starting of the game?
#while request.form.get('Initiate_Game') == True:
	#print('beepboop')


if __name__== '__main__':
    app.run()